/*
 * Copyright (c) 2017 Renesas Electronics Europe Ltd
 * SPDX-License-Identifier: MIT
 */

#ifndef __RZN1_CLKCTRL_TABLES_H__
#define __RZN1_CLKCTRL_TABLES_H__

#define RZN1_CLK_COUNT		134

static const struct rzn1_clkdesc rzn1_clock_list[RZN1_CLK_COUNT] = {
	[RZN1_HCLK_SDIO0_ID] =
		_CLK("hclk_sdio0",	_BIT(3, 0), _BIT(3, 1), _BIT(3, 2), _BIT(3, 3), _BIT(4, 0), _BIT(4, 1), _BIT(4, 2)),
	[RZN1_CLK_SDIO0_ID] =
		_CLK("clk_sdio0",	_BIT(3, 4), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_USBH_ID] =
		_CLK("hclk_usbh",	_BIT(7, 0), _BIT(7, 1), {0}, _BIT(7, 2), {0}, _BIT(8, 0), _BIT(8, 1)),
	[RZN1_HCLK_USBF_ID] =
		_CLK("hclk_usbf",	_BIT(7, 3), {0}, {0}, _BIT(7, 4), {0}, _BIT(8, 2), _BIT(8, 3)),
	[RZN1_HCLK_USBPM_ID] =
		_CLK("hclk_usbpm",	_BIT(7, 5), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_PCI_USB_ID] =
		_CLK("clk_pci_usb",	_BIT(7, 6), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_RSTN_F_48MHZ_ID] =
		_CLK("rstn_f_48mhz",	{0}, _BIT(7, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_CRYPTO_EIP93_ID] =
		_CLK("hclk_crypto_eip93",	_BIT(9, 0), _BIT(9, 1), {0}, _BIT(9, 2), {0}, _BIT(10, 0), _BIT(10, 1)),
	[RZN1_HCLK_CRYPTO_EIP150_ID] =
		_CLK("hclk_crypto_eip150",	_BIT(9, 3), _BIT(9, 4), _BIT(9, 5), {0}, _BIT(10, 2), {0}, {0}),
	[RZN1_RSTN_A_ZERO_CRYPTO_ID] =
		_CLK("rstn_a_zero_crypto",	{0}, _BIT(9, 6), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_MSEBI_S_ID] =
		_CLK("hclk_msebi_s",	_BIT(11, 0), _BIT(11, 1), _BIT(11, 2), _BIT(11, 3), _BIT(12, 0), _BIT(12, 1), _BIT(12, 2)),
	[RZN1_HCLK_MSEBI_M_ID] =
		_CLK("hclk_msebi_m",	_BIT(11, 4), _BIT(11, 5), _BIT(11, 6), {0}, _BIT(12, 3), {0}, {0}),
	[RZN1_HCLK_UART0_ID] =
		_CLK("hclk_uart0",	_BIT(13, 0), _BIT(13, 1), _BIT(13, 2), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART1_ID] =
		_CLK("hclk_uart1",	_BIT(13, 3), _BIT(13, 4), _BIT(13, 5), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART2_ID] =
		_CLK("hclk_uart2",	_BIT(13, 6), _BIT(13, 7), _BIT(13, 8), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_I2C0_ID] =
		_CLK("hclk_i2c0",	_BIT(13, 9), _BIT(13, 10), _BIT(13, 11), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_I2C1_ID] =
		_CLK("hclk_i2c1",	_BIT(13, 12), _BIT(13, 13), _BIT(13, 14), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_ADC_ID] =
		_CLK("hclk_adc",	_BIT(13, 15), _BIT(13, 16), _BIT(13, 17), {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART0_ID] =
		_CLK("clk_uart0",	_BIT(13, 18), _BIT(13, 19), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART0_ID] =
		_CLK("clk_usbuart0",	_BIT(13, 20), _BIT(13, 21), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART1_ID] =
		_CLK("clk_uart1",	_BIT(13, 22), _BIT(13, 23), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART1_ID] =
		_CLK("clk_usbuart1",	_BIT(13, 24), _BIT(13, 25), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART2_ID] =
		_CLK("clk_uart2",	_BIT(13, 26), _BIT(13, 27), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART2_ID] =
		_CLK("clk_usbuart2",	_BIT(13, 28), _BIT(13, 29), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_I2C0_ID] =
		_CLK("clk_i2c0",	_BIT(15, 6), _BIT(15, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_I2C1_ID] =
		_CLK("clk_i2c1",	_BIT(15, 8), _BIT(15, 9), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_ADC_ID] =
		_CLK("clk_adc",		_BIT(15, 10), _BIT(15, 11), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SGPIO0_ID] =
		_CLK("hclk_sgpio0",	_BIT(15, 0), _BIT(15, 1), _BIT(15, 2), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SGPIO1_ID] =
		_CLK("hclk_sgpio1",	_BIT(15, 3), _BIT(15, 4), _BIT(15, 5), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_PWMPTO_ID] =
		_CLK("hclk_pwmpto",	_BIT(15, 12), _BIT(15, 13), _BIT(15, 14), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_DELTASIGMA_ID] =
		_CLK("hclk_deltasigma",	_BIT(15, 15), _BIT(15, 16), _BIT(15, 17), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI0_ID] =
		_CLK("hclk_spi0",	_BIT(16, 0), _BIT(16, 1), _BIT(16, 2), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI1_ID] =
		_CLK("hclk_spi1",	_BIT(16, 3), _BIT(16, 4), _BIT(16, 5), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI2_ID] =
		_CLK("hclk_spi2",	_BIT(16, 6), _BIT(16, 7), _BIT(16, 8), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI3_ID] =
		_CLK("hclk_spi3",	_BIT(16, 9), _BIT(16, 10), _BIT(16, 11), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI4_ID] =
		_CLK("hclk_spi4",	_BIT(16, 12), _BIT(16, 13), _BIT(16, 14), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SPI5_ID] =
		_CLK("hclk_spi5",	_BIT(16, 15), _BIT(16, 16), _BIT(16, 17), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_GPIO0_ID] =
		_CLK("hclk_gpio0",	_BIT(16, 18), _BIT(16, 19), _BIT(16, 20), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_GPIO1_ID] =
		_CLK("hclk_gpio1",	_BIT(16, 21), _BIT(16, 22), _BIT(16, 23), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART3_ID] =
		_CLK("hclk_uart3",	_BIT(16, 24), _BIT(16, 25), _BIT(16, 26), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART4_ID] =
		_CLK("hclk_uart4",	_BIT(16, 27), _BIT(16, 28), _BIT(16, 29), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART5_ID] =
		_CLK("hclk_uart5",	_BIT(17, 0), _BIT(17, 1), _BIT(17, 2), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART6_ID] =
		_CLK("hclk_uart6",	_BIT(17, 3), _BIT(17, 4), _BIT(17, 5), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_UART7_ID] =
		_CLK("hclk_uart7",	_BIT(17, 6), _BIT(17, 7), _BIT(17, 8), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_GPIO2_ID] =
		_CLK("hclk_gpio2",	_BIT(17, 9), _BIT(17, 10), _BIT(17, 11), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_PG19_ID] =
		_CLK("hclk_pg19",	_BIT(17, 12), _BIT(17, 13), _BIT(17, 14), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_PG20_ID] =
		_CLK("hclk_pg20",	_BIT(17, 15), _BIT(17, 16), _BIT(17, 17), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_DMA0_ID] =
		_CLK("hclk_dma0",	_BIT(19, 0), _BIT(19, 1), _BIT(19, 2), _BIT(19, 3), _BIT(22, 0), _BIT(22, 1), _BIT(22, 2)),
	[RZN1_HCLK_DMA1_ID] =
		_CLK("hclk_dma1",	_BIT(19, 4), _BIT(19, 5), _BIT(19, 6), _BIT(19, 7), _BIT(22, 3), _BIT(22, 4), _BIT(22, 5)),
	[RZN1_HCLK_NAND_ID] =
		_CLK("hclk_nand",	_BIT(20, 0), _BIT(20, 1), _BIT(20, 2), _BIT(20, 3), _BIT(23, 0), _BIT(23, 1), _BIT(23, 2)),
	[RZN1_CLK_NAND_ID] =
		_CLK("clk_nand",	_BIT(20, 4), _BIT(20, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_QSPI0_ID] =
		_CLK("hclk_qspi0",	_BIT(21, 0), _BIT(21, 1), _BIT(21, 2), _BIT(21, 3), _BIT(24, 0), _BIT(24, 1), _BIT(24, 2)),
	[RZN1_CLK_QSPI0_ID] =
		_CLK("clk_qspi0",	_BIT(21, 4), _BIT(21, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_DDRC_ID] =
		_CLK("hclk_ddrc",	_BIT(25, 0), _BIT(25, 2), {0}, _BIT(25, 1), {0}, _BIT(29, 0), _BIT(29, 1)),
	[RZN1_CLK_DDRC_ID] =
		_CLK("clk_ddrc",	_BIT(25, 3), _BIT(25, 4), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_RGMII_REF_ID] =
		_CLK("clk_rgmii_ref",	_BIT(26, 0), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_RMII_REF_ID] =
		_CLK("clk_rmii_ref",	_BIT(26, 1), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_MII_REF_ID] =
		_CLK("clk_mii_ref",	_BIT(26, 2), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_GMAC0_ID] =
		_CLK("hclk_gmac0",	_BIT(27, 0), _BIT(27, 1), _BIT(27, 2), _BIT(27, 3), _BIT(30, 0), _BIT(30, 1), _BIT(30, 2)),
	[RZN1_HCLK_GMAC1_ID] =
		_CLK("hclk_gmac1",	_BIT(28, 0), _BIT(28, 1), _BIT(28, 2), _BIT(28, 3), _BIT(31, 0), _BIT(31, 1), _BIT(31, 2)),
	[RZN1_HCLK_ECAT125_ID] =
		_CLK("hclk_ecat125",	_BIT(32, 0), _BIT(32, 1), {0}, _BIT(32, 2), {0}, _BIT(34, 0), _BIT(34, 1)),
	[RZN1_CLK_ECAT25_ID] =
		_CLK("clk_ecat25",	_BIT(32, 3), _BIT(32, 4), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_ECAT100_ID] =
		_CLK("clk_ecat100",	_BIT(32, 5), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SERCOS_ID] =
		_CLK("hclk_sercos",	_BIT(33, 0), _BIT(33, 2), {0}, _BIT(33, 1), {0}, _BIT(35, 0), _BIT(35, 1)),
	[RZN1_CLK_SERCOS50_ID] =
		_CLK("clk_sercos50",	_BIT(33, 4), _BIT(33, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SERCOS100_ID] =
		_CLK("clk_sercos100",	_BIT(33, 5), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_QSPI1_ID] =
		_CLK("hclk_qspi1",	_BIT(36, 0), _BIT(36, 1), _BIT(36, 2), _BIT(36, 3), _BIT(38, 0), _BIT(38, 1), _BIT(38, 2)),
	[RZN1_CLK_QSPI1_ID] =
		_CLK("clk_qspi1",	_BIT(36, 4), _BIT(36, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_HSR_ID] =
		_CLK("hclk_hsr",	_BIT(36, 0), _BIT(36, 2), {0}, _BIT(36, 1), {0}, _BIT(38, 0), _BIT(38, 1)),
	[RZN1_CLK_HSR100_ID] =
		_CLK("clk_hsr100",	_BIT(36, 3), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_HSR50_ID] =
		_CLK("clk_hsr50",	_BIT(36, 4), _BIT(36, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SDIO1_ID] =
		_CLK("hclk_sdio1",	_BIT(50, 0), _BIT(50, 1), _BIT(50, 2), _BIT(50, 3), _BIT(51, 0), _BIT(51, 1), _BIT(51, 2)),
	[RZN1_CLK_SDIO1_ID] =
		_CLK("clk_sdio1",	_BIT(50, 4), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_PINCONFIG_ID] =
		_CLK("hclk_pinconfig",	_BIT(58, 0), _BIT(58, 1), _BIT(58, 2), {0}, _BIT(87, 0), {0}, {0}),
	[RZN1_HCLK_TIMER0_ID] =
		_CLK("hclk_timer0",	_BIT(58, 3), _BIT(58, 4), _BIT(58, 5), {0}, _BIT(87, 1), {0}, {0}),
	[RZN1_HCLK_TIMER1_ID] =
		_CLK("hclk_timer1",	_BIT(58, 6), _BIT(58, 7), _BIT(58, 8), {0}, _BIT(87, 2), {0}, {0}),
	[RZN1_CLK_25MHZ_PG4_ID] =
		_CLK("clk_25mhz_pg4",	_BIT(58, 9), _BIT(58, 10), _BIT(58, 11), {0}, _BIT(87, 3), {0}, {0}),
	[RZN1_CLK_25MHZ_PG5_ID] =
		_CLK("clk_25mhz_pg5",	_BIT(58, 12), _BIT(58, 13), _BIT(58, 14), {0}, _BIT(87, 4), {0}, {0}),
	[RZN1_CLK_25MHZ_PG6_ID] =
		_CLK("clk_25mhz_pg6",	_BIT(58, 15), _BIT(58, 16), _BIT(58, 17), {0}, _BIT(87, 5), {0}, {0}),
	[RZN1_CLK_25MHZ_PG7_ID] =
		_CLK("clk_25mhz_pg7",	_BIT(58, 18), _BIT(58, 19), _BIT(58, 20), {0}, _BIT(87, 6), {0}, {0}),
	[RZN1_CLK_25MHZ_PG8_ID] =
		_CLK("clk_25mhz_pg8",	_BIT(58, 21), _BIT(58, 22), _BIT(58, 23), {0}, _BIT(87, 7), {0}, {0}),
	[RZN1_CLK_UART3_ID] =
		_CLK("clk_uart3",	_BIT(59, 0), _BIT(59, 1), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART3_ID] =
		_CLK("clk_usbuart3",	_BIT(59, 2), _BIT(59, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART4_ID] =
		_CLK("clk_uart4",	_BIT(59, 4), _BIT(59, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART4_ID] =
		_CLK("clk_usbuart4",	_BIT(59, 6), _BIT(59, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART5_ID] =
		_CLK("clk_uart5",	_BIT(59, 8), _BIT(59, 9), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART5_ID] =
		_CLK("clk_usbuart5",	_BIT(59, 10), _BIT(59, 11), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART6_ID] =
		_CLK("clk_uart6",	_BIT(59, 12), _BIT(59, 13), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART6_ID] =
		_CLK("clk_usbuart6",	_BIT(59, 14), _BIT(59, 15), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_UART7_ID] =
		_CLK("clk_uart7",	_BIT(59, 16), _BIT(59, 17), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBUART7_ID] =
		_CLK("clk_usbuart7",	_BIT(59, 18), _BIT(59, 19), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_NOUSBP2_PG6_ID] =
		_CLK("clk_nousbp2_pg6",	_BIT(59, 20), _BIT(59, 21), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_USBP2_PG6_ID] =
		_CLK("clk_usbp2_pg6",	_BIT(59, 22), _BIT(59, 23), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_CAN1_ID] =
		_CLK("hclk_can1",	_BIT(60, 6), _BIT(60, 7), _BIT(60, 8), {0}, _BIT(88, 2), {0}, {0}),
	[RZN1_CLK_48MHZ_PG4_ID] =
		_CLK("clk_48mhz_pg4",	_BIT(60, 9), _BIT(60, 10), _BIT(60, 11), {0}, _BIT(88, 3), {0}, {0}),
	[RZN1_CLK_48MHZ_PG_F_ID] =
		_CLK("clk_48mhz_pg_f",	_BIT(60, 12), _BIT(60, 13), {0}, _BIT(60, 14), {0}, _BIT(88, 4), _BIT(88, 5)),
	[RZN1_HCLK_RSV_ID] =
		_CLK("hclk_rsv",	_BIT(60, 0), _BIT(60, 1), _BIT(60, 2), {0}, _BIT(88, 0), {0}, {0}),
	[RZN1_HCLK_CAN0_ID] =
		_CLK("hclk_can0",	_BIT(60, 3), _BIT(60, 4), _BIT(60, 5), {0}, _BIT(88, 1), {0}, {0}),
	[RZN1_HCLK_LCD_ID] =
		_CLK("hclk_lcd",	_BIT(61, 0), _BIT(61, 1), _BIT(61, 2), {0}, _BIT(89, 0), {0}, {0}),
	[RZN1_HCLK_SEMAP_ID] =
		_CLK("hclk_semap",	_BIT(61, 3), _BIT(61, 4), _BIT(61, 5), {0}, _BIT(89, 1), {0}, {0}),
	[RZN1_HCLK_PG3_ID] =
		_CLK("hclk_pg3",	_BIT(61, 6), _BIT(61, 7), _BIT(61, 8), {0}, _BIT(89, 2), {0}, {0}),
	[RZN1_HCLK_PG4_ID] =
		_CLK("hclk_pg4",	_BIT(61, 9), _BIT(61, 10), _BIT(61, 11), {0}, _BIT(89, 3), {0}, {0}),
	[RZN1_HCLK_PG_I_ID] =
		_CLK("hclk_pg_i",	_BIT(61, 12), _BIT(61, 13), {0}, _BIT(61, 14), {0}, _BIT(89, 4), _BIT(89, 5)),
	[RZN1_CLK_SPI0_ID] =
		_CLK("clk_spi0",	_BIT(63, 0), _BIT(63, 1), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SPI1_ID] =
		_CLK("clk_spi1",	_BIT(63, 2), _BIT(63, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SPI2_ID] =
		_CLK("clk_spi2",	_BIT(63, 4), _BIT(63, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SPI3_ID] =
		_CLK("clk_spi3",	_BIT(63, 6), _BIT(63, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SPI4_ID] =
		_CLK("clk_spi4",	_BIT(65, 0), _BIT(65, 1), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SPI5_ID] =
		_CLK("clk_spi5",	_BIT(65, 2), _BIT(65, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P4_PG3_ID] =
		_CLK("clk_p4_pg3",	_BIT(65, 4), _BIT(65, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P4_PG4_ID] =
		_CLK("clk_p4_pg4",	_BIT(65, 6), _BIT(65, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_SLCD_ID] =
		_CLK("clk_slcd",	_BIT(67, 0), _BIT(67, 1), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P1_PG2_ID] =
		_CLK("clk_p1_pg2",	_BIT(67, 2), _BIT(67, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P1_PG3_ID] =
		_CLK("clk_p1_pg3",	_BIT(67, 4), _BIT(67, 5), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P1_PG4_ID] =
		_CLK("clk_p1_pg4",	_BIT(67, 6), _BIT(67, 7), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_P6_PG1_ID] =
		_CLK("clk_p6_pg1",	_BIT(69, 0), _BIT(69, 1), _BIT(69, 2), {0}, _BIT(91, 0), {0}, {0}),
	[RZN1_CLK_P6_PG2_ID] =
		_CLK("clk_p6_pg2",	_BIT(69, 3), _BIT(69, 4), _BIT(69, 5), {0}, _BIT(91, 1), {0}, {0}),
	[RZN1_CLK_P6_PG3_ID] =
		_CLK("clk_p6_pg3",	_BIT(69, 6), _BIT(69, 7), _BIT(69, 8), {0}, _BIT(91, 2), {0}, {0}),
	[RZN1_CLK_P6_PG4_ID] =
		_CLK("clk_p6_pg4",	_BIT(69, 9), _BIT(69, 10), _BIT(69, 11), {0}, _BIT(91, 3), {0}, {0}),
	[RZN1_HCLK_SGPIO2_ID] =
		_CLK("hclk_sgpio2",	_BIT(70, 3), _BIT(70, 4), _BIT(70, 5), {0}, _BIT(90, 1), {0}, {0}),
	[RZN1_HCLK_SGPIO3_ID] =
		_CLK("hclk_sgpio3",	_BIT(70, 6), _BIT(70, 7), _BIT(70, 8), {0}, _BIT(90, 2), {0}, {0}),
	[RZN1_HCLK_SGPIO4_ID] =
		_CLK("hclk_sgpio4",	_BIT(70, 9), _BIT(70, 10), _BIT(70, 11), {0}, _BIT(90, 3), {0}, {0}),
	[RZN1_HCLK_SWITCH_ID] =
		_CLK("hclk_switch",	_BIT(76, 0), {0}, _BIT(76, 1), {0}, {0}, {0}, {0}),
	[RZN1_CLK_SWITCH_ID] =
		_CLK("clk_switch",	_BIT(76, 2), _BIT(76, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_RTC_ID] =
		_CLK("hclk_rtc",	_BIT(80, 0), {0}, {0}, {0}, {0}, {0}, {0}),
	[RZN1_RSTN_FW_RTC_ID] =
		_CLK("rstn_fw_rtc",	{0}, _BIT(80, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_HCLK_ROM_ID] =
		_CLK("hclk_rom",	_BIT(85, 0), _BIT(85, 1), _BIT(85, 2), {0}, _BIT(92, 0), {0}, {0}),
	[RZN1_CLK_CM3_ID] =
		_CLK("clk_cm3",		_BIT(93, 0), _BIT(93, 1), {0}, _BIT(93, 2), {0}, _BIT(94, 0), _BIT(94, 1)),
	[RZN1_HCLK_CM3_ID] =
		_CLK("hclk_cm3",	_BIT(97, 0), _BIT(97, 1), _BIT(97, 2), {0}, {0}, {0}, {0}),
	[RZN1_HCLK_SWITCH_RG_ID] =
		_CLK("hclk_switch_rg",	_BIT(98, 0), _BIT(98, 1), _BIT(98, 2), {0}, {0}, {0}, {0}),
	[RZN1_RSTN_CLK25_SWITCHCTRL_ID] =
		_CLK("rstn_clk25_switchctrl",	{0}, _BIT(98, 3), {0}, {0}, {0}, {0}, {0}),
	[RZN1_RSTN_ETH_SWITCHCTRL_ID] =
		_CLK("rstn_eth_switchctrl",	{0}, _BIT(98, 4), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_HW_RTOS_ID] =
		_CLK("clk_hw_rtos",	_BIT(99, 0), _BIT(99, 1), {0}, {0}, {0}, {0}, {0}),
	[RZN1_CLK_RTOS_MDC_ID] =
		_CLK("clk_rtos_mdc",	_BIT(99, 2), {0}, {0}, {0}, {0}, {0}, {0}),
};


#endif /* __RZN1_CLKCTRL_TABLES_H__ */
