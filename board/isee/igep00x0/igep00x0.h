/*
 * (C) Copyright 2010
 * ISEE 2007 SL, <www.iseebcn.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef _IGEP00X0_H_
#define _IGEP00X0_H_

#if (CONFIG_MACH_TYPE == MACH_TYPE_IGEP0020)
#include <asm/arch/dss.h>
#include <asm/arch/clock.h>
#define IGEP00X0_GPIO_LED 27
#endif

#if (CONFIG_MACH_TYPE == MACH_TYPE_IGEP0030)
#define IGEP00X0_GPIO_LED 16
#endif

const omap3_sysinfo sysinfo = {
	DDR_STACKED,
#if (CONFIG_MACH_TYPE == MACH_TYPE_IGEP0020)
	"IGEPv2",
#endif
#if (CONFIG_MACH_TYPE == MACH_TYPE_IGEP0030)
	"IGEP COM MODULE/ELECTRON",
#endif
#if (CONFIG_MACH_TYPE == MACH_TYPE_IGEP0032)
	"IGEP COM PROTON",
#endif
#if defined(CONFIG_ENV_IS_IN_ONENAND)
	"ONENAND",
#else
	"NAND",
#endif
};

static void setup_net_chip(void);

/*
 * IEN  - Input Enable
 * IDIS - Input Disable
 * PTD  - Pull type Down
 * PTU  - Pull type Up
 * DIS  - Pull type selection is inactive
 * EN   - Pull type selection is active
 * M0   - Mode 0
 * The commented string gives the final mux configuration for that pin
 */
#define MUX_DEFAULT()\
	MUX_VAL(CP(SDRC_D0),        (IEN  | PTD | DIS | M0)) /* SDRC_D0 */\
	MUX_VAL(CP(SDRC_D1),        (IEN  | PTD | DIS | M0)) /* SDRC_D1 */\
	MUX_VAL(CP(SDRC_D2),        (IEN  | PTD | DIS | M0)) /* SDRC_D2 */\
	MUX_VAL(CP(SDRC_D3),        (IEN  | PTD | DIS | M0)) /* SDRC_D3 */\
	MUX_VAL(CP(SDRC_D4),        (IEN  | PTD | DIS | M0)) /* SDRC_D4 */\
	MUX_VAL(CP(SDRC_D5),        (IEN  | PTD | DIS | M0)) /* SDRC_D5 */\
	MUX_VAL(CP(SDRC_D6),        (IEN  | PTD | DIS | M0)) /* SDRC_D6 */\
	MUX_VAL(CP(SDRC_D7),        (IEN  | PTD | DIS | M0)) /* SDRC_D7 */\
	MUX_VAL(CP(SDRC_D8),        (IEN  | PTD | DIS | M0)) /* SDRC_D8 */\
	MUX_VAL(CP(SDRC_D9),        (IEN  | PTD | DIS | M0)) /* SDRC_D9 */\
	MUX_VAL(CP(SDRC_D10),       (IEN  | PTD | DIS | M0)) /* SDRC_D10 */\
	MUX_VAL(CP(SDRC_D11),       (IEN  | PTD | DIS | M0)) /* SDRC_D11 */\
	MUX_VAL(CP(SDRC_D12),       (IEN  | PTD | DIS | M0)) /* SDRC_D12 */\
	MUX_VAL(CP(SDRC_D13),       (IEN  | PTD | DIS | M0)) /* SDRC_D13 */\
	MUX_VAL(CP(SDRC_D14),       (IEN  | PTD | DIS | M0)) /* SDRC_D14 */\
	MUX_VAL(CP(SDRC_D15),       (IEN  | PTD | DIS | M0)) /* SDRC_D15 */\
	MUX_VAL(CP(SDRC_D16),       (IEN  | PTD | DIS | M0)) /* SDRC_D16 */\
	MUX_VAL(CP(SDRC_D17),       (IEN  | PTD | DIS | M0)) /* SDRC_D17 */\
	MUX_VAL(CP(SDRC_D18),       (IEN  | PTD | DIS | M0)) /* SDRC_D18 */\
	MUX_VAL(CP(SDRC_D19),       (IEN  | PTD | DIS | M0)) /* SDRC_D19 */\
	MUX_VAL(CP(SDRC_D20),       (IEN  | PTD | DIS | M0)) /* SDRC_D20 */\
	MUX_VAL(CP(SDRC_D21),       (IEN  | PTD | DIS | M0)) /* SDRC_D21 */\
	MUX_VAL(CP(SDRC_D22),       (IEN  | PTD | DIS | M0)) /* SDRC_D22 */\
	MUX_VAL(CP(SDRC_D23),       (IEN  | PTD | DIS | M0)) /* SDRC_D23 */\
	MUX_VAL(CP(SDRC_D24),       (IEN  | PTD | DIS | M0)) /* SDRC_D24 */\
	MUX_VAL(CP(SDRC_D25),       (IEN  | PTD | DIS | M0)) /* SDRC_D25 */\
	MUX_VAL(CP(SDRC_D26),       (IEN  | PTD | DIS | M0)) /* SDRC_D26 */\
	MUX_VAL(CP(SDRC_D27),       (IEN  | PTD | DIS | M0)) /* SDRC_D27 */\
	MUX_VAL(CP(SDRC_D28),       (IEN  | PTD | DIS | M0)) /* SDRC_D28 */\
	MUX_VAL(CP(SDRC_D29),       (IEN  | PTD | DIS | M0)) /* SDRC_D29 */\
	MUX_VAL(CP(SDRC_D30),       (IEN  | PTD | DIS | M0)) /* SDRC_D30 */\
	MUX_VAL(CP(SDRC_D31),       (IEN  | PTD | DIS | M0)) /* SDRC_D31 */\
	MUX_VAL(CP(SDRC_CLK),       (IEN  | PTD | DIS | M0)) /* SDRC_CLK */\
	MUX_VAL(CP(SDRC_DQS0),      (IEN  | PTD | DIS | M0)) /* SDRC_DQS0 */\
	MUX_VAL(CP(SDRC_DQS1),      (IEN  | PTD | DIS | M0)) /* SDRC_DQS1 */\
	MUX_VAL(CP(SDRC_DQS2),      (IEN  | PTD | DIS | M0)) /* SDRC_DQS2 */\
	MUX_VAL(CP(SDRC_DQS3),      (IEN  | PTD | DIS | M0)) /* SDRC_DQS3 */\
	MUX_VAL(CP(GPMC_A1),        (IDIS | PTD | DIS | M0)) /* GPMC_A1 */\
	MUX_VAL(CP(GPMC_A2),        (IDIS | PTD | DIS | M0)) /* GPMC_A2 */\
	MUX_VAL(CP(GPMC_A3),        (IDIS | PTD | DIS | M0)) /* GPMC_A3 */\
	MUX_VAL(CP(GPMC_A4),        (IDIS | PTD | DIS | M0)) /* GPMC_A4 */\
	MUX_VAL(CP(GPMC_A5),        (IDIS | PTD | DIS | M0)) /* GPMC_A5 */\
	MUX_VAL(CP(GPMC_A6),        (IDIS | PTD | DIS | M0)) /* GPMC_A6 */\
	MUX_VAL(CP(GPMC_A7),        (IDIS | PTD | DIS | M0)) /* GPMC_A7 */\
	MUX_VAL(CP(GPMC_A8),        (IDIS | PTD | DIS | M0)) /* GPMC_A8 */\
	MUX_VAL(CP(GPMC_A9),        (IDIS | PTD | DIS | M0)) /* GPMC_A9 */\
	MUX_VAL(CP(GPMC_A10),       (IDIS | PTD | DIS | M0)) /* GPMC_A10 */\
	MUX_VAL(CP(GPMC_D0),        (IEN  | PTD | DIS | M0)) /* GPMC_D0 */\
	MUX_VAL(CP(GPMC_D1),        (IEN  | PTD | DIS | M0)) /* GPMC_D1 */\
	MUX_VAL(CP(GPMC_D2),        (IEN  | PTD | DIS | M0)) /* GPMC_D2 */\
	MUX_VAL(CP(GPMC_D3),        (IEN  | PTD | DIS | M0)) /* GPMC_D3 */\
	MUX_VAL(CP(GPMC_D4),        (IEN  | PTD | DIS | M0)) /* GPMC_D4 */\
	MUX_VAL(CP(GPMC_D5),        (IEN  | PTD | DIS | M0)) /* GPMC_D5 */\
	MUX_VAL(CP(GPMC_D6),        (IEN  | PTD | DIS | M0)) /* GPMC_D6 */\
	MUX_VAL(CP(GPMC_D7),        (IEN  | PTD | DIS | M0)) /* GPMC_D7 */\
	MUX_VAL(CP(GPMC_D8),        (IEN  | PTD | DIS | M0)) /* GPMC_D8 */\
	MUX_VAL(CP(GPMC_D9),        (IEN  | PTD | DIS | M0)) /* GPMC_D9 */\
	MUX_VAL(CP(GPMC_D10),       (IEN  | PTD | DIS | M0)) /* GPMC_D10 */\
	MUX_VAL(CP(GPMC_D11),       (IEN  | PTD | DIS | M0)) /* GPMC_D11 */\
	MUX_VAL(CP(GPMC_D12),       (IEN  | PTD | DIS | M0)) /* GPMC_D12 */\
	MUX_VAL(CP(GPMC_D13),       (IEN  | PTD | DIS | M0)) /* GPMC_D13 */\
	MUX_VAL(CP(GPMC_D14),       (IEN  | PTD | DIS | M0)) /* GPMC_D14 */\
	MUX_VAL(CP(GPMC_D15),       (IEN  | PTD | DIS | M0)) /* GPMC_D15 */\
	MUX_VAL(CP(GPMC_NCS0),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS0 */\
	MUX_VAL(CP(GPMC_NCS1),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS1 */\
	MUX_VAL(CP(GPMC_NCS2),      (IDIS | PTU | EN  | M0)) /* GPIO_nCS2 */\
	MUX_VAL(CP(GPMC_NCS3),      (IDIS | PTU | EN  | M0)) /* GPIO_nCS3 */\
	MUX_VAL(CP(GPMC_NCS4),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS4 */\
	MUX_VAL(CP(GPMC_NCS5),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS5 */\
	MUX_VAL(CP(GPMC_NCS6),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS6 */\
	MUX_VAL(CP(GPMC_NCS7),      (IDIS | PTU | EN  | M0)) /* GPMC_nCS7 */\
	MUX_VAL(CP(GPMC_CLK),       (IDIS | PTD | DIS | M0)) /* GPMC_CLK */\
	MUX_VAL(CP(GPMC_NADV_ALE),  (IDIS | PTD | DIS | M0)) /* GPMC_nADV_ALE */\
	MUX_VAL(CP(GPMC_NOE),       (IDIS | PTD | DIS | M0)) /* GPMC_nOE */\
	MUX_VAL(CP(GPMC_NWE),       (IDIS | PTD | DIS | M0)) /* GPMC_nWE */\
	MUX_VAL(CP(GPMC_NBE0_CLE),  (IDIS | PTD | DIS | M0)) /* GPMC_nBE0_CLE */\
	MUX_VAL(CP(GPMC_NBE1),      (IEN  | PTD | DIS | M0)) /* GPMC_nBE1 */\
	MUX_VAL(CP(GPMC_NWP),       (IEN  | PTD | DIS | M0)) /* GPMC_nWP */\
	MUX_VAL(CP(GPMC_WAIT0),     (IEN  | PTU | EN  | M0)) /* GPMC_WAIT0 */\
	MUX_VAL(CP(MMC1_CLK),       (IDIS | PTU | EN  | M0)) /* MMC1_CLK */\
	MUX_VAL(CP(MMC1_CMD),       (IEN  | PTU | EN  | M0)) /* MMC1_CMD */\
	MUX_VAL(CP(MMC1_DAT0),      (IEN  | PTU | EN  | M0)) /* MMC1_DAT0 */\
	MUX_VAL(CP(MMC1_DAT1),      (IEN  | PTU | EN  | M0)) /* MMC1_DAT1 */\
	MUX_VAL(CP(MMC1_DAT2),      (IEN  | PTU | EN  | M0)) /* MMC1_DAT2 */\
	MUX_VAL(CP(MMC1_DAT3),      (IEN  | PTU | EN  | M0)) /* MMC1_DAT3 */\
	MUX_VAL(CP(UART3_TX_IRTX),  (IDIS | PTD | DIS | M0)) /* UART3_TX */\
	MUX_VAL(CP(UART3_RX_IRRX),  (IEN  | PTD | DIS | M0)) /* UART3_RX */\
	MUX_VAL(CP(I2C1_SCL),       (IEN  | PTU | EN  | M0)) /* I2C1_SCL */\
	MUX_VAL(CP(I2C1_SDA),       (IEN  | PTU | EN  | M0)) /* I2C1_SDA */\
	MUX_VAL(CP(I2C4_SCL),       (IEN  | PTU | EN  | M0)) /* I2C4_SCL */\
	MUX_VAL(CP(I2C4_SDA),       (IEN  | PTU | EN  | M0)) /* I2C4_SDA */\
	MUX_VAL(CP(SYS_32K),        (IEN  | PTD | DIS | M0)) /* SYS_32K */\
	MUX_VAL(CP(SYS_BOOT0),      (IEN  | PTD | DIS | M4)) /* GPIO_2 */\
	MUX_VAL(CP(SYS_BOOT1),      (IEN  | PTD | DIS | M4)) /* GPIO_3 */\
	MUX_VAL(CP(SYS_BOOT2),      (IEN  | PTD | DIS | M4)) /* GPIO_4 */\
	MUX_VAL(CP(SYS_BOOT3),      (IEN  | PTD | DIS | M4)) /* GPIO_5 */\
	MUX_VAL(CP(SYS_BOOT4),      (IEN  | PTD | DIS | M4)) /* GPIO_6 */\
	MUX_VAL(CP(SYS_BOOT5),      (IEN  | PTD | DIS | M4)) /* GPIO_7 */\
	MUX_VAL(CP(SYS_BOOT6),      (IEN  | PTD | DIS | M4)) /* GPIO_8 */\
	MUX_VAL(CP(SDRC_CKE0),      (IDIS | PTU | EN  | M0)) /* SDRC_CKE0 */\
	MUX_VAL(CP(SDRC_CKE1),      (IDIS | PTU | EN  | M0)) /* SDRC_CKE1 */
#endif

#define MUX_IGEP0020() \
	MUX_VAL(CP(GPMC_WAIT2),     (IEN  | PTU | DIS | M4)) /* GPIO_64-ETH_NRST */\
	MUX_VAL(CP(HDQ_SIO),		(IDIS | PTU | EN  | M4)) /*GPIO_170*/\
	MUX_VAL(CP(DSS_PCLK),		(IDIS | PTD | DIS | M0)) /*DSS_PCLK*/\
	MUX_VAL(CP(DSS_HSYNC),		(IDIS | PTD | DIS | M0)) /*DSS_HSYNC*/\
	MUX_VAL(CP(DSS_VSYNC),		(IDIS | PTD | DIS | M0)) /*DSS_VSYNC*/\
	MUX_VAL(CP(DSS_ACBIAS),		(IDIS | PTD | DIS | M0)) /*DSS_ACBIAS*/\
	MUX_VAL(CP(DSS_DATA0),		(IDIS | PTD | DIS | M0)) /*DSS_DATA0*/\
	MUX_VAL(CP(DSS_DATA1),		(IDIS | PTD | DIS | M0)) /*DSS_DATA1*/\
	MUX_VAL(CP(DSS_DATA2),		(IDIS | PTD | DIS | M0)) /*DSS_DATA2*/\
	MUX_VAL(CP(DSS_DATA3),		(IDIS | PTD | DIS | M0)) /*DSS_DATA3*/\
	MUX_VAL(CP(DSS_DATA4),		(IDIS | PTD | DIS | M0)) /*DSS_DATA4*/\
	MUX_VAL(CP(DSS_DATA5),		(IDIS | PTD | DIS | M0)) /*DSS_DATA5*/\
	MUX_VAL(CP(DSS_DATA6),		(IDIS | PTD | DIS | M0)) /*DSS_DATA6*/\
	MUX_VAL(CP(DSS_DATA7),		(IDIS | PTD | DIS | M0)) /*DSS_DATA7*/\
	MUX_VAL(CP(DSS_DATA8),		(IDIS | PTD | DIS | M0)) /*DSS_DATA8*/\
	MUX_VAL(CP(DSS_DATA9),		(IDIS | PTD | DIS | M0)) /*DSS_DATA9*/\
	MUX_VAL(CP(DSS_DATA10),		(IDIS | PTD | DIS | M0)) /*DSS_DATA10*/\
	MUX_VAL(CP(DSS_DATA11),		(IDIS | PTD | DIS | M0)) /*DSS_DATA11*/\
	MUX_VAL(CP(DSS_DATA12),		(IDIS | PTD | DIS | M0)) /*DSS_DATA12*/\
	MUX_VAL(CP(DSS_DATA13),		(IDIS | PTD | DIS | M0)) /*DSS_DATA13*/\
	MUX_VAL(CP(DSS_DATA14),		(IDIS | PTD | DIS | M0)) /*DSS_DATA14*/\
	MUX_VAL(CP(DSS_DATA15),		(IDIS | PTD | DIS | M0)) /*DSS_DATA15*/\
	MUX_VAL(CP(DSS_DATA16),		(IDIS | PTD | DIS | M0)) /*DSS_DATA16*/\
	MUX_VAL(CP(DSS_DATA17),		(IDIS | PTD | DIS | M0)) /*DSS_DATA17*/\
	MUX_VAL(CP(DSS_DATA18),		(IDIS | PTD | DIS | M0)) /*DSS_DATA18*/\
	MUX_VAL(CP(DSS_DATA19),		(IDIS | PTD | DIS | M0)) /*DSS_DATA19*/\
	MUX_VAL(CP(DSS_DATA20),		(IDIS | PTD | DIS | M0)) /*DSS_DATA20*/\
	MUX_VAL(CP(DSS_DATA21),		(IDIS | PTD | DIS | M0)) /*DSS_DATA21*/\
	MUX_VAL(CP(DSS_DATA22),		(IDIS | PTD | DIS | M0)) /*DSS_DATA22*/\
	MUX_VAL(CP(DSS_DATA23),		(IDIS | PTD | DIS | M0)) /*DSS_DATA23*/\

#define MUX_IGEP0030() \
	MUX_VAL(CP(UART1_TX),       (IDIS | PTD | DIS | M0)) /* UART1_TX */\
	MUX_VAL(CP(UART1_RX),       (IEN  | PTD | DIS | M0)) /* UART1_RX */

/* Display configuration */

#define DVI_IGEP_ORANGE_COL           0x00FF8000

/*
 * Configure Timings for DVI D
 */
static const struct panel_config dvid_cfg = {
        .timing_h       = 0x0ff03f31, /* Horizontal timing */
        .timing_v       = 0x01400504, /* Vertical timing */
        .pol_freq       = 0x00007028, /* Pol Freq */
        .divisor        = 0x00010006, /* 72Mhz Pixel Clock */
        .lcd_size       = 0x02ff03ff, /* 1024x768 */
        .panel_type     = 0x01, /* TFT */
        .data_lines     = 0x03, /* 24 Bit RGB */
        .load_mode      = 0x02, /* Frame Mode */
        .panel_color    = DVI_IGEP_ORANGE_COL, /* ORANGE */
        .gfx_format     = GFXFORMAT_RGB24_UNPACKED,
};
