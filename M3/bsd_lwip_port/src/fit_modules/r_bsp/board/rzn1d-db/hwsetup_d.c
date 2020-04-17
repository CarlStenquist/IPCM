/***********************************************************************************************************************
 * DISCLAIMER
 * This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No
 * other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all
 * applicable laws, including copyright laws.
 * THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
 * THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM
 * EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES
 * SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS
 * SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
 * Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of
 * this software. By using this software, you agree to the additional terms and conditions found by accessing the
 * following link:
 * http://www.renesas.com/disclaimer
 *
 * Copyright (C) 2019 Renesas Electronics Corporation. All rights reserved.
 **********************************************************************************************************************/
/***********************************************************************************************************************
 * $Revision: 1301 $
 * $Date: 2019-02-25 14:29:43 +0000 (Mon, 25 Feb 2019) $
 *
 * PROJECT NAME :  RZ/N1 bare metal Drivers
 * FILE         :  hwsetup_d.c
 * Description  :  Defines the initialization routines used each time the MCU is restarted.
 *
 * (C) Copyright Renesas Electronics Europe Ltd. 2019. All Rights Reserved
 **********************************************************************************************************************/

/***********************************************************************************************************************
 Includes   <System Includes> , "Project Includes"
 **********************************************************************************************************************/
/* I/O Register and board definitions */
#include "platform.h"

#include "r_sysctrl_rzn1_if.h"
#include "r_gpio_rzn1_if.h"
#include "r_i2c_rzn1_if.h"
#include "timer.h"

/***********************************************************************************************************************
 Private global variables and functions
 **********************************************************************************************************************/
/* MCU I/O port configuration function declaration */
static void output_ports_configure (void);

/* Interrupt configuration function declaration */
static void interrupts_configure (void);

/* MCU peripheral module configuration function declaration */
static void peripheral_modules_enable (void);

/* Pin mux configuration function declaration  */
static int rzn1_board_pinmux (int periph);
void rzn1_pinmux_set (uint32_t setting);

/* Configure DMA handshaking source multiplexing */
static void dma_mux_configure (void);

/***********************************************************************************************************************
 * Function name: hardware_setup
 * Description  : Contains setup functions called at device restart
 * Arguments    : none
 * Return value : none
 **********************************************************************************************************************/
void hardware_setup (void)
{
    /* All driver module requires that timer has been started. */
    /* Initialise the System timer */
    clock_init();
    /* Start the System timer */
    sys_timer_start();

    /* Configure pin mux */
    R_SYSCTRL_EnableIOMUXLV2();
    if (rzn1_board_pinmux( -1) == 0)
    {
        /* Error */
        while (1);
    }

    output_ports_configure();
    interrupts_configure();
    peripheral_modules_enable();

    dma_mux_configure();
}

/***********************************************************************************************************************
 * Function name: output_ports_configure
 * Description  : Configures the port and pin direction settings, and sets the pin outputs to a safe level.
 * Arguments    : none
 * Return value : none
 **********************************************************************************************************************/
static void output_ports_configure (void)
{
    int32_t ret_val;

    /* GPIO Initialization */
    ret_val = R_GPIO_Init();
    if (ER_OK != ret_val)
    {
        /* Error */
        while (1);
    }

    /* Add code here to configure output ports */
}

/***********************************************************************************************************************
 * Function name: interrupts_configure
 * Description  : Configures interrupts used
 * Arguments    : none
 * Return value : none
 **********************************************************************************************************************/
static void interrupts_configure (void)
{
    /* Add code here to setup additional interrupts */
}

/***********************************************************************************************************************
 * Function name: peripheral_modules_enable
 * Description  : Enables and configures peripheral devices on the MCU
 * Arguments    : none
 * Return value : none
 **********************************************************************************************************************/
static void peripheral_modules_enable (void)
{
    uint8_t addr;
    uint8_t data;
    ER_RET ret_val;

    /* Configure I2C to control LED on board */
    ret_val = R_I2C_Init();
    /* Control port extender PCA9698 functionality */
    /* Bank 0: connected to LED */
    /* Bank 1: connected to 8 dip switches */
    /* Bank 2: control EEPROM access of the on board EEPROM */
    if (ER_OK == ret_val)
    {
        ret_val = R_I2C_Open(I2C_CHAN_2);
    }
    /* I/O configuration register bank 0
     Configure all bits as output port */
    if (ER_OK == ret_val)
    {
        addr = 0x18;
        data = 0x00;
        ret_val = R_I2C_Write(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
    }
    /* I/O configuration register bank 2
     Configure control bits as output port */
    if (ER_OK == ret_val)
    {
        addr = 0x1a;
        data = 0xf8;
        ret_val = R_I2C_Write(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
    }
    /* Output port register bank 2
     Set control bits to 001b, which means EEPROM connects to I2C (standard) */
    if (ER_OK == ret_val)
    {
        addr = 0x0a;
        data = 0x01;
        ret_val = R_I2C_Write(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
    }
    if (ER_OK != ret_val)
    {
        /* Error */
        while (1);
    }
}

/***********************************************************************************************************************
 * Function name:
 * Description  :
 * Arguments    : none
 * Return value : LED value (8-bits)
 **********************************************************************************************************************/
uint32_t led_get (void)
{
    uint8_t addr;
    uint8_t data;
    ER_RET ret_val;

    /* Output port register bank 0
     Get LED value */
    addr = 0x08;
    ret_val = R_I2C_Read(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
    if (ER_OK != ret_val)
    {
        /* Error */
        while (1);
    }

    return (uint32_t) data;
}

/***********************************************************************************************************************
 * Function name:
 * Description  :
 * Arguments    : LED value (8-bits)
 * Return value : Error code
 **********************************************************************************************************************/
int32_t led_set (uint32_t val)
{
    uint8_t addr;
    uint8_t data;

    /* Output port register bank 0
     Set LED value */
    addr = 0x08;
    data = (uint8_t) val;
    return R_I2C_Write(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
}

/***********************************************************************************************************************
 * Function name:
 * Description  :
 * Arguments    : LED value (8-bits)
 * Return value : Error code
 **********************************************************************************************************************/
int32_t led_toggle (uint32_t val)
{
    uint32_t tmp;

    tmp = led_get() ^ val;

    return led_set(tmp);
}

/***********************************************************************************************************************
 * Function name:
 * Description  :
 * Arguments    : none
 * Return value : DIPSW value (8-bits)
 **********************************************************************************************************************/
uint32_t dipsw_get (void)
{
    uint8_t addr;
    uint8_t data;
    ER_RET ret_val;

    /* Input port register bank 1
     Get dip switch value */
    addr = 0x01;
    ret_val = R_I2C_Read(I2C_CHAN_2, I2C_PORT_EXPANDER_SLAVE_ADDR, &addr, 1, &data, 1, I2C_TRANSFER_MODE_BLOCKING);
    if (ER_OK != ret_val)
    {
        /* Error */
        while (1);
    }

    /* Data shows - 1:Switch On ,0:Switch Off */
    return (uint32_t) (uint8_t) ~data;
}

/***********************************************************************************************************************
 * Function name: dma_mux_configure
 * Description  : Configures the DMA handshaking source multiplexing
 * Arguments    : none
 * Return value : none
 **********************************************************************************************************************/
static void dma_mux_configure (void)
{
    if ( -1 == rzn1_dma_mux())
    {
        /* Error */
        while (1);
    }
}

/***********************************************************************************************************************
 * Function name: rzn1_board_pinmux
 * Description  : Set pin mux according to the table 'rzn1_pinmux_map' generated by PinMux Tool.
 * Arguments    : periph -
 *                    Peripheral group to set. If specified '-1', set all.
 * Return value : The number of pins configured
 **********************************************************************************************************************/
static int rzn1_board_pinmux (int periph)
{
    int i, cnt = 0;

    for (i = 0; rzn1_pinmux_map[i]; i++)
    {
        if (periph == -1 || (rzn1_pinmux_map[i] >> RZN1_MUX_PERIPH_BIT) == (uint32_t) periph)
        {
            rzn1_pinmux_set(rzn1_pinmux_map[i]);
            cnt++;
        }
    }
    return cnt;
}
