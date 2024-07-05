/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2017, The Linux Foundation. All rights reserved.
 */

#ifndef QCOM_PHY_QMP_PCIE_QHP_H_
#define QCOM_PHY_QMP_PCIE_QHP_H_

/* PCIE GEN3 COM registers */
#define PCIE_GEN3_QHP_COM_SSC_EN_CENTER			0x14
#define PCIE_GEN3_QHP_COM_SSC_PER1			0x20
#define PCIE_GEN3_QHP_COM_SSC_PER2			0x24
#define PCIE_GEN3_QHP_COM_SSC_STEP_SIZE1		0x28
#define PCIE_GEN3_QHP_COM_SSC_STEP_SIZE2		0x2c
#define PCIE_GEN3_QHP_COM_SSC_STEP_SIZE1_MODE1		0x34
#define PCIE_GEN3_QHP_COM_SSC_STEP_SIZE2_MODE1		0x38
#define PCIE_GEN3_QHP_COM_BIAS_EN_CKBUFLR_EN		0x54
#define PCIE_GEN3_QHP_COM_CLK_ENABLE1			0x58
#define PCIE_GEN3_QHP_COM_LOCK_CMP1_MODE0		0x6c
#define PCIE_GEN3_QHP_COM_LOCK_CMP2_MODE0		0x70
#define PCIE_GEN3_QHP_COM_LOCK_CMP1_MODE1		0x78
#define PCIE_GEN3_QHP_COM_LOCK_CMP2_MODE1		0x7c
#define PCIE_GEN3_QHP_COM_BGV_TRIM			0x98
#define PCIE_GEN3_QHP_COM_CP_CTRL_MODE0			0xb4
#define PCIE_GEN3_QHP_COM_CP_CTRL_MODE1			0xb8
#define PCIE_GEN3_QHP_COM_PLL_RCTRL_MODE0		0xc0
#define PCIE_GEN3_QHP_COM_PLL_RCTRL_MODE1		0xc4
#define PCIE_GEN3_QHP_COM_PLL_CCTRL_MODE0		0xcc
#define PCIE_GEN3_QHP_COM_PLL_CCTRL_MODE1		0xd0
#define PCIE_GEN3_QHP_COM_SYSCLK_EN_SEL			0xdc
#define PCIE_GEN3_QHP_COM_RESTRIM_CTRL2			0xf0
#define PCIE_GEN3_QHP_COM_LOCK_CMP_EN			0xf8
#define PCIE_GEN3_QHP_COM_DEC_START_MODE0		0x100
#define PCIE_GEN3_QHP_COM_DEC_START_MODE1		0x108
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START1_MODE0		0x11c
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START2_MODE0		0x120
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START3_MODE0		0x124
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START1_MODE1		0x128
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START2_MODE1		0x12c
#define PCIE_GEN3_QHP_COM_DIV_FRAC_START3_MODE1		0x130
#define PCIE_GEN3_QHP_COM_INTEGLOOP_GAIN0_MODE0		0x150
#define PCIE_GEN3_QHP_COM_INTEGLOOP_GAIN0_MODE1		0x158
#define PCIE_GEN3_QHP_COM_VCO_TUNE_MAP			0x178
#define PCIE_GEN3_QHP_COM_BG_CTRL			0x1c8
#define PCIE_GEN3_QHP_COM_CLK_SELECT			0x1cc
#define PCIE_GEN3_QHP_COM_HSCLK_SEL1			0x1d0
#define PCIE_GEN3_QHP_COM_CORECLK_DIV			0x1e0
#define PCIE_GEN3_QHP_COM_CORE_CLK_EN			0x1e8
#define PCIE_GEN3_QHP_COM_CMN_CONFIG			0x1f0
#define PCIE_GEN3_QHP_COM_SVS_MODE_CLK_SEL		0x1fc
#define PCIE_GEN3_QHP_COM_CORECLK_DIV_MODE1		0x21c
#define PCIE_GEN3_QHP_COM_CMN_MODE			0x224
#define PCIE_GEN3_QHP_COM_VREGCLK_DIV1			0x228
#define PCIE_GEN3_QHP_COM_VREGCLK_DIV2			0x22c

/* PCIE GEN3 QHP Lane registers */
#define PCIE_GEN3_QHP_L0_DRVR_CTRL0			0xc
#define PCIE_GEN3_QHP_L0_DRVR_CTRL1			0x10
#define PCIE_GEN3_QHP_L0_DRVR_CTRL2			0x14
#define PCIE_GEN3_QHP_L0_DRVR_TAP_EN			0x18
#define PCIE_GEN3_QHP_L0_TX_BAND_MODE			0x60
#define PCIE_GEN3_QHP_L0_LANE_MODE			0x64
#define PCIE_GEN3_QHP_L0_PARALLEL_RATE			0x7c
#define PCIE_GEN3_QHP_L0_CML_CTRL_MODE0			0xc0
#define PCIE_GEN3_QHP_L0_CML_CTRL_MODE1			0xc4
#define PCIE_GEN3_QHP_L0_CML_CTRL_MODE2			0xc8
#define PCIE_GEN3_QHP_L0_PREAMP_CTRL_MODE1		0xd0
#define PCIE_GEN3_QHP_L0_PREAMP_CTRL_MODE2		0xd4
#define PCIE_GEN3_QHP_L0_MIXER_CTRL_MODE0		0xd8
#define PCIE_GEN3_QHP_L0_MIXER_CTRL_MODE1		0xdc
#define PCIE_GEN3_QHP_L0_MIXER_CTRL_MODE2		0xe0
#define PCIE_GEN3_QHP_L0_CTLE_THRESH_DFE		0xfc
#define PCIE_GEN3_QHP_L0_CGA_THRESH_DFE			0x100
#define PCIE_GEN3_QHP_L0_RXENGINE_EN0			0x108
#define PCIE_GEN3_QHP_L0_CTLE_TRAIN_TIME		0x114
#define PCIE_GEN3_QHP_L0_CTLE_DFE_OVRLP_TIME		0x118
#define PCIE_GEN3_QHP_L0_DFE_REFRESH_TIME		0x11c
#define PCIE_GEN3_QHP_L0_DFE_ENABLE_TIME		0x120
#define PCIE_GEN3_QHP_L0_VGA_GAIN			0x124
#define PCIE_GEN3_QHP_L0_DFE_GAIN			0x128
#define PCIE_GEN3_QHP_L0_EQ_GAIN			0x130
#define PCIE_GEN3_QHP_L0_OFFSET_GAIN			0x134
#define PCIE_GEN3_QHP_L0_PRE_GAIN			0x138
#define PCIE_GEN3_QHP_L0_VGA_INITVAL			0x13c
#define PCIE_GEN3_QHP_L0_EQ_INTVAL			0x154
#define PCIE_GEN3_QHP_L0_EDAC_INITVAL			0x160
#define PCIE_GEN3_QHP_L0_RXEQ_INITB0			0x168
#define PCIE_GEN3_QHP_L0_RXEQ_INITB1			0x16c
#define PCIE_GEN3_QHP_L0_RCVRDONE_THRESH1		0x178
#define PCIE_GEN3_QHP_L0_RXEQ_CTRL			0x180
#define PCIE_GEN3_QHP_L0_UCDR_FO_GAIN_MODE0		0x184
#define PCIE_GEN3_QHP_L0_UCDR_FO_GAIN_MODE1		0x188
#define PCIE_GEN3_QHP_L0_UCDR_FO_GAIN_MODE2		0x18c
#define PCIE_GEN3_QHP_L0_UCDR_SO_GAIN_MODE0		0x190
#define PCIE_GEN3_QHP_L0_UCDR_SO_GAIN_MODE1		0x194
#define PCIE_GEN3_QHP_L0_UCDR_SO_GAIN_MODE2		0x198
#define PCIE_GEN3_QHP_L0_UCDR_SO_CONFIG			0x19c
#define PCIE_GEN3_QHP_L0_RX_BAND			0x1a4
#define PCIE_GEN3_QHP_L0_RX_RCVR_PATH1_MODE0		0x1c0
#define PCIE_GEN3_QHP_L0_RX_RCVR_PATH1_MODE1		0x1c4
#define PCIE_GEN3_QHP_L0_RX_RCVR_PATH1_MODE2		0x1c8
#define PCIE_GEN3_QHP_L0_SIGDET_ENABLES			0x230
#define PCIE_GEN3_QHP_L0_SIGDET_CNTRL			0x234
#define PCIE_GEN3_QHP_L0_SIGDET_DEGLITCH_CNTRL		0x238
#define PCIE_GEN3_QHP_L0_DCC_GAIN			0x2a4
#define PCIE_GEN3_QHP_L0_RSM_START			0x2a8
#define PCIE_GEN3_QHP_L0_RX_EN_SIGNAL			0x2ac
#define PCIE_GEN3_QHP_L0_PSM_RX_EN_CAL			0x2b0
#define PCIE_GEN3_QHP_L0_RX_MISC_CNTRL0			0x2b8
#define PCIE_GEN3_QHP_L0_TS0_TIMER			0x2c0
#define PCIE_GEN3_QHP_L0_DLL_HIGHDATARATE		0x2c4
#define PCIE_GEN3_QHP_L0_RX_RESETCODE_OFFSET		0x2cc

/* PCIE GEN3 PCS registers */
#define PCIE_GEN3_QHP_PHY_TXMGN_MAIN_V0_M3P5DB		0x2c
#define PCIE_GEN3_QHP_PHY_TXMGN_POST_V0_M3P5DB		0x40
#define PCIE_GEN3_QHP_PHY_TXMGN_MAIN_V0_M6DB		0x54
#define PCIE_GEN3_QHP_PHY_TXMGN_POST_V0_M6DB		0x68
#define PCIE_GEN3_QHP_PHY_POWER_STATE_CONFIG		0x15c
#define PCIE_GEN3_QHP_PHY_POWER_STATE_CONFIG5		0x16c
#define PCIE_GEN3_QHP_PHY_PCS_TX_RX_CONFIG		0x174

#endif