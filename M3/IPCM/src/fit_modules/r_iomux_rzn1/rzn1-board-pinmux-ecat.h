/*
 * This file was autogenerated
 * DO NOT EDIT
 * (C) 2015-2016 Renesas Electronics Europe, LTD
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __RZN1_BOARD_PINMUX_H__
#define __RZN1_BOARD_PINMUX_H__
/*
 * AUTOGENERATED DO NOT EDIT
 *
 * Renesas RZ/N1D Demo Board - EtherCAT use
 * This file only sets the pin function by default.
 *
 * You can override the default mux pullup/down and drive by
 * defining the following macros in the board file before
 * including this.
 */

#ifndef RZN1_MUX_DEFAULT
#define RZN1_MUX_DEFAULT RZN1_MUX
#endif

#include "renesas/pinctrl-rzn1.h"
#undef UART2

#ifndef RZN1_MUX_CAN
#define RZN1_MUX_CAN RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_CAN0
#define RZN1_MUX_CAN0 RZN1_MUX_CAN
#endif
#ifndef RZN1_MUX_CAN1
#define RZN1_MUX_CAN1 RZN1_MUX_CAN
#endif
#ifndef RZN1_MUX_CAT
#define RZN1_MUX_CAT RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_ETH0
#define RZN1_MUX_ETH0 RZN1_MUX_PNONE_6MA
#endif
#ifndef RZN1_MUX_ETH1
#define RZN1_MUX_ETH1 RZN1_MUX_PNONE_6MA
#endif
#ifndef RZN1_MUX_ETH2
#define RZN1_MUX_ETH2 RZN1_MUX_PNONE_6MA
#endif
#ifndef RZN1_MUX_ETH3
#define RZN1_MUX_ETH3 RZN1_MUX_PNONE_6MA
#endif
#ifndef RZN1_MUX_ETH4
#define RZN1_MUX_ETH4 RZN1_MUX_PNONE_6MA
#endif
#ifndef RZN1_MUX_GPIO
#define RZN1_MUX_GPIO RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_GPIO1
#define RZN1_MUX_GPIO1 RZN1_MUX_GPIO
#endif
#ifndef RZN1_MUX_GPIO2
#define RZN1_MUX_GPIO2 RZN1_MUX_GPIO
#endif
#ifndef RZN1_MUX_I2C1
#define RZN1_MUX_I2C1 RZN1_MUX_12MA
#endif
#ifndef RZN1_MUX_LCD
#define RZN1_MUX_LCD RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_MDIO
#define RZN1_MUX_MDIO RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_MDIO0
#define RZN1_MUX_MDIO0 RZN1_MUX_MDIO
#endif
#ifndef RZN1_MUX_MDIO1
#define RZN1_MUX_MDIO1 RZN1_MUX_MDIO
#endif
#ifndef RZN1_MUX_NMI
#define RZN1_MUX_NMI RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_QSPI0
#define RZN1_MUX_QSPI0 RZN1_MUX_PNONE
#endif
#ifndef RZN1_MUX_REFCLK
#define RZN1_MUX_REFCLK RZN1_MUX_PNONE
#endif
#ifndef RZN1_MUX_SDIO
#define RZN1_MUX_SDIO RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_SDIO0
#define RZN1_MUX_SDIO0 RZN1_MUX_SDIO
#endif
#ifndef RZN1_MUX_SPI
#define RZN1_MUX_SPI RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_SPI0
#define RZN1_MUX_SPI0 RZN1_MUX_SPI
#endif
#ifndef RZN1_MUX_SWITCH
#define RZN1_MUX_SWITCH RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_UART0
#define RZN1_MUX_UART0 RZN1_MUX_PNONE
#endif
#ifndef RZN1_MUX_UART2
#define RZN1_MUX_UART2 RZN1_MUX_PNONE
#endif
#ifndef RZN1_MUX_UART
#define RZN1_MUX_UART RZN1_MUX_DEFAULT
#endif
#ifndef RZN1_MUX_UART3
#define RZN1_MUX_UART3 RZN1_MUX_UART
#endif
#ifndef RZN1_MUX_USB
#define RZN1_MUX_USB RZN1_MUX_DEFAULT
#endif

#define RZN1_MUX_PERIPH_BIT	24

/*
 * These numbers are arbitrary and do not correspond to anything
 * on the hardware, they are for the application convenience only
 * and *will* change if the pinmux is regenerated by the Webapp.
 */
enum {
	RZN1_P_CAN0 = 0, RZN1_P_CAN1, RZN1_P_CAT, RZN1_P_ETH0, RZN1_P_ETH1, RZN1_P_ETH2,
	RZN1_P_ETH3, RZN1_P_ETH4, RZN1_P_GPIO1, RZN1_P_GPIO2, RZN1_P_I2C1, RZN1_P_LCD,
	RZN1_P_MDIO0, RZN1_P_MDIO1, RZN1_P_NMI, RZN1_P_QSPI0, RZN1_P_REFCLK, RZN1_P_SDIO0,
	RZN1_P_SPI0, RZN1_P_SWITCH, RZN1_P_UART0, RZN1_P_UART2, RZN1_P_UART3, RZN1_P_USB,
};

/*
 * A peripheral number is also encoded in these constants to
 * help parsing in case your code wishes to do pinmux selectively
 */
#define _RZP(_P, _M) ((_M) | (RZN1_##_P << RZN1_MUX_PERIPH_BIT))

static const uint32_t rzn1_pinmux_map[] = {
	_RZP(P_CAN0, RZN1_MUX_CAN0(162, CAN)),			/* CAN0_TXD */
	_RZP(P_CAN0, RZN1_MUX_CAN0(163, CAN)),			/* CAN0_RXD */
	_RZP(P_CAN1, RZN1_MUX_CAN1(109, CAN)),			/* CAN1_TXD */
	_RZP(P_CAN1, RZN1_MUX_CAN1(110, CAN)),			/* CAN1_RXD */
	_RZP(P_CAT, RZN1_MUX_CAT(80, ETHERCAT)),		/* CAT_MII_LINK[0] */
	_RZP(P_CAT, RZN1_MUX_CAT(81, ETHERCAT)),		/* CAT_MII_LINK[1] */
#if (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_CAT, RZN1_MUX_CAT(82, ETHERCAT)),		/* CAT_MII_LINK[2] */
#else // (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(82, GPIO)),		/* GPIO2B[13] */
#endif // (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_CAT, RZN1_MUX_CAT(83, ETHERCAT)),		/* CAT_SYNC[0] */
	_RZP(P_CAT, RZN1_MUX_CAT(84, ETHERCAT)),		/* CAT_SYNC[1] */
	_RZP(P_CAT, RZN1_MUX_CAT(87, ETHERCAT)),		/* CAT_LINKACT[0] */
	_RZP(P_CAT, RZN1_MUX_CAT(88, ETHERCAT)),		/* CAT_LINKACT[1] */
#if (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_CAT, RZN1_MUX_CAT(89, ETHERCAT)),		/* CAT_LINKACT[2] */
#else // (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(89, GPIO)),		/* GPIO2B[20] */
#endif // (GOAL_CONFIG_ETHERCAT_3PORTS == 1)
	_RZP(P_CAT, RZN1_MUX_CAT(90, ETHERCAT)),		/* CAT_LEDRUN */
	_RZP(P_CAT, RZN1_MUX_CAT(91, ETHERCAT)),		/* CAT_LEDERR */
	_RZP(P_CAT, RZN1_MUX_CAT(92, ETHERCAT)),		/* CAT_LEDSTER */
	_RZP(P_CAT, RZN1_MUX_CAT(112, ETHERCAT)),		/* CAT_I2CDATA */
	_RZP(P_CAT, RZN1_MUX_CAT(113, ETHERCAT)),		/* CAT_I2CCLK */
	_RZP(P_ETH0, RZN1_MUX_ETH0(0, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXCLK */
	_RZP(P_ETH0, RZN1_MUX_ETH0(1, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXD[0] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(2, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXD[1] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(3, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXD[2] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(4, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXD[3] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(5, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_TXEN */
	_RZP(P_ETH0, RZN1_MUX_ETH0(6, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXCLK */
	_RZP(P_ETH0, RZN1_MUX_ETH0(7, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXD[0] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(8, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXD[1] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(9, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXD[2] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(10, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXD[3] */
	_RZP(P_ETH0, RZN1_MUX_ETH0(11, CLK_ETH_MII_RGMII_RMII)),	/* ETH0_RXDV */
	_RZP(P_ETH1, RZN1_MUX_ETH1(12, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXCLK */
	_RZP(P_ETH1, RZN1_MUX_ETH1(13, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXD[0] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(14, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXD[1] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(15, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXD[2] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(16, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXD[3] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(17, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_TXEN */
	_RZP(P_ETH1, RZN1_MUX_ETH1(18, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXCLK */
	_RZP(P_ETH1, RZN1_MUX_ETH1(19, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXD[0] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(20, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXD[1] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(21, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXD[2] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(22, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXD[3] */
	_RZP(P_ETH1, RZN1_MUX_ETH1(23, CLK_ETH_MII_RGMII_RMII)),	/* ETH1_RXDV */
	_RZP(P_ETH2, RZN1_MUX_ETH2(24, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXCLK */
	_RZP(P_ETH2, RZN1_MUX_ETH2(25, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXD[0] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(26, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXD[1] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(27, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXD[2] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(28, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXD[3] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(29, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_TXEN */
	_RZP(P_ETH2, RZN1_MUX_ETH2(30, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXCLK */
	_RZP(P_ETH2, RZN1_MUX_ETH2(31, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXD[0] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(32, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXD[1] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(33, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXD[2] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(34, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXD[3] */
	_RZP(P_ETH2, RZN1_MUX_ETH2(35, CLK_ETH_MII_RGMII_RMII)),	/* ETH2_RXDV */
	_RZP(P_ETH3, RZN1_MUX_ETH3(36, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXCLK */
	_RZP(P_ETH3, RZN1_MUX_ETH3(37, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXD[0] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(38, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXD[1] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(39, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXD[2] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(40, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXD[3] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(41, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_TXEN */
	_RZP(P_ETH3, RZN1_MUX_ETH3(42, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXCLK */
	_RZP(P_ETH3, RZN1_MUX_ETH3(43, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXD[0] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(44, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXD[1] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(45, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXD[2] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(46, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXD[3] */
	_RZP(P_ETH3, RZN1_MUX_ETH3(47, CLK_ETH_MII_RGMII_RMII)),	/* ETH3_RXDV */
	_RZP(P_ETH4, RZN1_MUX_ETH4(48, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXCLK */
	_RZP(P_ETH4, RZN1_MUX_ETH4(49, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXD[0] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(50, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXD[1] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(51, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXD[2] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(52, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXD[3] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(53, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_TXEN */
	_RZP(P_ETH4, RZN1_MUX_ETH4(54, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXCLK */
	_RZP(P_ETH4, RZN1_MUX_ETH4(55, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXD[0] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(56, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXD[1] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(57, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXD[2] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(58, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXD[3] */
	_RZP(P_ETH4, RZN1_MUX_ETH4(59, CLK_ETH_MII_RGMII_RMII)),	/* ETH4_RXDV */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(85, GPIO)),		/* PMOD_2 (GPIO1B[16]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(86, GPIO)),		/* PMOD_2 (GPIO1B[17]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(93, GPIO)),		/* LED_2G (GPIO1B[24]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(94, GPIO)),		/* ETH_PHY_RESET (GPIO1B[25]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(117, GPIO)),		/* GPIO1A[27] */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(118, GPIO)),		/* ETHERNET Port3 IRQ (GPIO1A[28]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(154, GPIO)),		/* GPIO2 (GPIO1B[30]) */
	_RZP(P_GPIO1, RZN1_MUX_GPIO1(155, GPIO)),		/* GPIO (GPIO1B[31]) */
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(126, GPIO)),		/* ETHERNET Port2 IRQ (GPIO2A[4]) */
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(146, GPIO)),		/* ETHERNET Port1  IRQ (GPIO2A[24]) */
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(147, GPIO)),		/* Eth Port4 IRQ (GPIO2A[25]) */
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(148, GPIO)),		/* TouchSCRN_IRQ (GPIO2A[26]) */
	_RZP(P_GPIO2, RZN1_MUX_GPIO2(149, GPIO)),		/* Eth Port5 IRQ (GPIO2A[27]) */
	_RZP(P_I2C1, RZN1_MUX_I2C1(115, I2C)),			/* I2C1_SCL */
	_RZP(P_I2C1, RZN1_MUX_I2C1(116, I2C)),			/* I2C1_SDA */
	_RZP(P_LCD, RZN1_MUX_LCD(62, LCD)),			/* LCD_R[1] */
	_RZP(P_LCD, RZN1_MUX_LCD(63, LCD)),			/* LCD_G[1] */
	_RZP(P_LCD, RZN1_MUX_LCD(64, LCD)),			/* LCD_B[1] */
	_RZP(P_LCD, RZN1_MUX_LCD(65, LCD)),			/* LCD_R[2] */
	_RZP(P_LCD, RZN1_MUX_LCD(66, LCD)),			/* LCD_G[2] */
	_RZP(P_LCD, RZN1_MUX_LCD(67, LCD)),			/* LCD_B[2] */
	_RZP(P_LCD, RZN1_MUX_LCD(68, LCD)),			/* LCD_R[3] */
	_RZP(P_LCD, RZN1_MUX_LCD(69, LCD)),			/* LCD_G[3] */
	_RZP(P_LCD, RZN1_MUX_LCD(70, LCD)),			/* LCD_B[3] */
	_RZP(P_LCD, RZN1_MUX_LCD(71, LCD)),			/* LCD_R[4] */
	_RZP(P_LCD, RZN1_MUX_LCD(72, LCD)),			/* LCD_G[4] */
	_RZP(P_LCD, RZN1_MUX_LCD(73, LCD)),			/* LCD_B[4] */
	_RZP(P_LCD, RZN1_MUX_LCD(127, LCD)),			/* LCD_PWM[0] */
	_RZP(P_LCD, RZN1_MUX_LCD(128, LCD)),			/* LCD_PCLK */
	_RZP(P_LCD, RZN1_MUX_LCD(129, LCD)),			/* LCD_HSYNC */
	_RZP(P_LCD, RZN1_MUX_LCD(130, LCD)),			/* LCD_VSYNC */
	_RZP(P_LCD, RZN1_MUX_LCD(131, LCD)),			/* LCD_DE */
	_RZP(P_LCD, RZN1_MUX_LCD(132, LCD)),			/* LCD_PE */
	_RZP(P_LCD, RZN1_MUX_LCD(133, LCD)),			/* LCD_PWM[1] */
	_RZP(P_LCD, RZN1_MUX_LCD(134, LCD)),			/* LCD_R[5] */
	_RZP(P_LCD, RZN1_MUX_LCD(135, LCD)),			/* LCD_R[0] */
	_RZP(P_LCD, RZN1_MUX_LCD(136, LCD)),			/* LCD_G[0] */
	_RZP(P_LCD, RZN1_MUX_LCD(137, LCD)),			/* LCD_B[0] */
	_RZP(P_LCD, RZN1_MUX_LCD(138, LCD)),			/* LCD_R[6] */
	_RZP(P_LCD, RZN1_MUX_LCD(139, LCD)),			/* LCD_G[6] */
	_RZP(P_LCD, RZN1_MUX_LCD(140, LCD)),			/* LCD_B[6] */
	_RZP(P_LCD, RZN1_MUX_LCD(141, LCD)),			/* LCD_R[7] */
	_RZP(P_LCD, RZN1_MUX_LCD(142, LCD)),			/* LCD_G[7] */
	_RZP(P_LCD, RZN1_MUX_LCD(143, LCD)),			/* LCD_B[7] */
	_RZP(P_LCD, RZN1_MUX_LCD(144, LCD)),			/* LCD_G[5] */
	_RZP(P_LCD, RZN1_MUX_LCD(145, LCD)),			/* LCD_B[5] */
	_RZP(P_MDIO0, RZN1_MUX_MDIO0(150, ETH_MDIO)),		/* MDIO0_MDC */
	_RZP(P_MDIO0, RZN1_MUX_MDIO0(151, ETH_MDIO)),		/* MDIO0_MDIO */
	_RZP(P_MDIO0, RZN1_MUX_MDIO0(170, MDIO_MUX_MAC0)),	/* MDIO0_MUX_MAC0 */
	_RZP(P_MDIO1, RZN1_MUX_MDIO1(152, ETH_MDIO)),		/* MDIO1_MDIO */
	_RZP(P_MDIO1, RZN1_MUX_MDIO1(153, ETH_MDIO)),		/* MDIO1_MDIO */
	_RZP(P_MDIO1, RZN1_MUX_MDIO1(171, MDIO_MUX_SWITCH)),	/* MDIO1_MUX_SWITCH */
	_RZP(P_NMI, RZN1_MUX_NMI(111, ETHERCAT)),		/* NMI_CORTEXM[3] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(74, QSPI)),		/* QSPI0_CS_N[0] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(75, QSPI)),		/* QSPI0_IO[3] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(76, QSPI)),		/* QSPI0_IO[2] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(77, QSPI)),		/* QSPI0_IO[1] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(78, QSPI)),		/* QSPI0_IO[0] */
	_RZP(P_QSPI0, RZN1_MUX_QSPI0(79, QSPI)),		/* QSPI0_CLK */
	_RZP(P_REFCLK, RZN1_MUX_REFCLK(60, CLK_ETH_MII_RGMII_RMII)),	/* REFCLK_RGMII */
	_RZP(P_REFCLK, RZN1_MUX_REFCLK(61, CLK_ETH_NAND)),	/* REFCLK_MII */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(95, SDIO)),		/* SDIO0_CMD */
	_RZP(P_SDIO0, RZN1_MUX_12MA(96, SDIO)),			/* SDIO0_CLK */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(97, SDIO)),		/* SDIO0_IO[0] */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(98, SDIO)),		/* SDIO0_IO[1] */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(99, SDIO)),		/* SDIO0_IO[2] */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(100, SDIO)),		/* SDIO0_IO[3] */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(101, SDIO_E)),		/* SDIO0_CD_N */
	_RZP(P_SDIO0, RZN1_MUX_SDIO0(102, SDIO_E)),		/* SDIO0_WP */
	_RZP(P_SPI0, RZN1_MUX_SPI0(156, SPI0_M)),		/* SPI0_CLK */
	_RZP(P_SPI0, RZN1_MUX_SPI0(157, SPI0_M)),		/* SPI0_MOSI */
	_RZP(P_SPI0, RZN1_MUX_SPI0(158, SPI0_M)),		/* SPI0_MISO */
	_RZP(P_SPI0, RZN1_MUX_SPI0(159, SPI0_M)),		/* SPI0_SS_N[0] */
	_RZP(P_SWITCH, RZN1_MUX_SWITCH(114, MAC_MTIP_SWITCH)),	/* SWITCH_MII_LINK[2] */
	_RZP(P_UART0, RZN1_MUX_UART0(103, UART0_I)),		/* UART0_TXD */
	_RZP(P_UART0, RZN1_MUX_UART0(104, UART0_I)),		/* UART0_RXD */
	_RZP(P_UART2, RZN1_MUX_UART2(105, UART2)),		/* UART2_TXD */
	_RZP(P_UART2, RZN1_MUX_UART2(106, UART2)),		/* UART2_RXD */
	_RZP(P_UART2, RZN1_MUX_UART2(107, UART2)),		/* UART2_RTS_N */
	_RZP(P_UART2, RZN1_MUX_UART2(108, UART2)),		/* UART2_CTS_N */
	_RZP(P_UART3, RZN1_MUX_UART3(123, UART3)),		/* UART3_TXD */
	_RZP(P_UART3, RZN1_MUX_UART3(124, UART3)),		/* UART3_RXD */
	_RZP(P_UART3, RZN1_MUX_UART3(125, UART3)),		/* UART3_RTS_N */
	_RZP(P_USB, RZN1_MUX_USB(119, USB)),			/* USB_PPON[1] */
	_RZP(P_USB, RZN1_MUX_USB(120, USB)),			/* USB_OC[1] */
	_RZP(P_USB, RZN1_MUX_USB(121, USB)),			/* USB_PPON[2] */
	_RZP(P_USB, RZN1_MUX_USB(122, USB)),			/* USB_OC[2] */
	0L, /* terminator */
};
/*
 * Sample function for setting the pinmux. Pass -1 for setting /all/
 * the pins, pass any of the RZN1_P_xxx for setting just that one set
 * returns the number of pins that have been set.
 * There is also a variant where you can pass multiple peripherals as
 * a bitmask.
 */
#ifdef USE_DEFAULT_PINMUX
/* Functions are marked 'unused' to prevent warnings on modern GCC */
#if defined(__GNUC__)
#define __unused __attribute__((unused))
#elif !defined(__unused)
#define __unused
#endif
static int rzn1_board_pinmux(int periph /* = -1 */) __unused;
static int rzn1_board_pinmux(int periph /* = -1 */) {
 int i, cnt = 0;
 for (i = 0; rzn1_pinmux_map[i]; i++)
  if (periph == -1 ||
      (rzn1_pinmux_map[i] >> RZN1_MUX_PERIPH_BIT) == (uint32_t)periph) {
       rzn1_pinmux_set(rzn1_pinmux_map[i]);
       cnt++;
 }
 return cnt;
}
static int rzn1_board_pinmux_mask(uint32_t periph_mask /* = -1 */) __unused;
static int rzn1_board_pinmux_mask(uint32_t periph_mask /* = -1 */) {
 int i, cnt = 0;
 for (i = 0; rzn1_pinmux_map[i]; i++)
  if (periph_mask & (1 << (rzn1_pinmux_map[i] >> RZN1_MUX_PERIPH_BIT))) {
   rzn1_pinmux_set(rzn1_pinmux_map[i]);
   cnt++;
  }
 return cnt;
}
#endif

/* 
 * this is the compressed Renesas Pinmux Web App data structure; this is
 * used to allow uploading this file back into the web app, make some
 * more changes and generate/save the DTS again. It is not used by linux
 * in any way.
 */
#ifdef JSON_PRESET
N4IgdghgtgpiBcIBKMwwM4XQAiQLQHoA5ARgBFsyYoB7bAIRogCcATbAWmwFEAXACxjMAwgEEAKtgCu6OABoQABwgBjANYQA5nEQ
wALAAYDIBYqEBLRYOYQANugQBtEN3EAJEiZfuATF9duAMz+7nohbgCsXkjcAGLCADIA0l4JwmReAIoAygAKAJKeCtkA6vniwm5eA
OIFAPJ+xWT5dUUgAKqiSOJtnd3BCmJEjSBEALL5XmLiXvk+wiPt2fRefeJhCrUtAyBjza1eey0jeYVToqQgALoKmormNAD6kLAO8
KAAnH6IAdxIRK5sLkaMxeIFsPkkJkvCQDAB2BAgXJjOpkR5tWEADkRyNR6JhBg+OJRaIxsOJeLJnkQuLRIxIJG+SJJj3pJGCNJZb
LCnLxbKivLROwZADYKUKYSQEYLHsKSNiZXKiYgEtw6UgYT5jCq1azqprqd43I9cm4AJqPGLZVyasWILYNTXSkAOmGBJm/f6A4Ggn
wQqEwiIe9x/AGSH28EjYf3QhQkCIclwCIEg3h6GOBnkgcQ0KQqfjZYT/R6Q2MgeMCpP8FOgiIZgC+t3uNDejjhET0UpFcnbnbhcJ
7HalmMHfY+o/lBgnmJI05808C07004i0+7vflA43mJH2/HG4+U4Ps4P84Pi4Py4Pq4P66HHy39939/3Ha1R7fBhPn7Pn4vn6vT8b
0/O89C1R8wIMZ9INfMDYVHHwGQQxlkP/ODALg4C4NAxCIMQ6DENgnwtQQxDSN/MCfDQ4iMOIrDiJwnw8J8AifCIwIPzAwJvy4iiq
OowJaMCVcIgiOERRYuRRLhHdV0EwIRW7eSRQHZSR2U8d5LhKctNnLT5y0xctOXLS5L0QJxLkLSB1EmcOykiI7JExz427Wz4xslzH
IcuzNIiRSTP8kU5KCpSgtUoKRz0fsvzkaLtIM/y4T0pLEpUoyksClSQpU7t4sJOL+3gwSSHMuKvkxD4lM7PQzNK6rStUmr1JFEgH
ys1qPhHfymI+WcerhL4pOC4TF38hN7PG4SRJG/zCq62doq6tKPhyqqrP89qIlhbyIgMEUPlWqT9sOvL+0CRd4sEjquqMg7MRM+65
PuvL4yOzsInWj72visCrL0cy9IB91/vMozgZM4GzPM6rzKa8z1OBzSAcMUHOzRgyUfBlG0ehvRYeitHEYB8d4okwrxMu/sRWXMnn
r2gzgoMO7xJ0pnV3i7SKeSuLOx3Xn5VJztDwFvq4sxZnaYl4SpJICS3KDBkrnrIA
#endif

#endif /* __RZN1_BOARD_PINMUX_H__ */