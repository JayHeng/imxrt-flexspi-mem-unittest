/*
 * Copyright 2017-2021 NXP
 * All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

/***********************************************************************************************************************
 * This file was generated by the MCUXpresso Config Tools. Any manual edits made to this file
 * will be overwritten if the respective MCUXpresso Config Tools is used to update this file.
 **********************************************************************************************************************/

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Pins v9.0
processor: MIMXRT1052xxxxB
package_id: MIMXRT1052DVL6B
mcu_data: ksdk2_0
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

#include "fsl_common.h"
#include "fsl_iomuxc.h"
#include "pin_mux.h"

/* FUNCTION ************************************************************************************************************
 * 
 * Function Name : BOARD_InitBootPins
 * Description   : Calls initialization functions.
 * 
 * END ****************************************************************************************************************/
void BOARD_InitBootPins(void) {
    BOARD_InitPins();
}

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: core0, enableClock: 'true'}
- pin_list:
  - {pin_num: L14, peripheral: LPUART1, signal: RX, pin_signal: GPIO_AD_B0_13, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: K14, peripheral: LPUART1, signal: TX, pin_signal: GPIO_AD_B0_12, software_input_on: Disable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_100, drive_strength: R0_6, slew_rate: Slow}
  - {pin_num: P3, peripheral: FLEXSPI, signal: FLEXSPI_A_DATA0, pin_signal: GPIO_SD_B1_08, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: N4, peripheral: FLEXSPI, signal: FLEXSPI_A_DATA1, pin_signal: GPIO_SD_B1_09, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: P4, peripheral: FLEXSPI, signal: FLEXSPI_A_DATA2, pin_signal: GPIO_SD_B1_10, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: P5, peripheral: FLEXSPI, signal: FLEXSPI_A_DATA3, pin_signal: GPIO_SD_B1_11, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: N3, peripheral: FLEXSPI, signal: FLEXSPI_A_DQS, pin_signal: GPIO_SD_B1_05, software_input_on: Enable, hysteresis_enable: Enable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Pull, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: L4, peripheral: FLEXSPI, signal: FLEXSPI_A_SCLK, pin_signal: GPIO_SD_B1_07, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: L3, peripheral: FLEXSPI, signal: FLEXSPI_A_SS0_B, pin_signal: GPIO_SD_B1_06, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: M4, peripheral: FLEXSPI, signal: FLEXSPI_B_DATA0, pin_signal: GPIO_SD_B1_03, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: M3, peripheral: FLEXSPI, signal: FLEXSPI_B_DATA1, pin_signal: GPIO_SD_B1_02, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: M5, peripheral: FLEXSPI, signal: FLEXSPI_B_DATA2, pin_signal: GPIO_SD_B1_01, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: L5, peripheral: FLEXSPI, signal: FLEXSPI_B_DATA3, pin_signal: GPIO_SD_B1_00, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
  - {pin_num: P2, peripheral: FLEXSPI, signal: FLEXSPI_B_SCLK, pin_signal: GPIO_SD_B1_04, software_input_on: Enable, hysteresis_enable: Disable, pull_up_down_config: Pull_Down_100K_Ohm,
    pull_keeper_select: Keeper, pull_keeper_enable: Enable, open_drain: Disable, speed: MHZ_200, drive_strength: R0_6, slew_rate: Fast}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */

/* FUNCTION ************************************************************************************************************
 *
 * Function Name : BOARD_InitPins
 * Description   : Configures pin routing and optionally pin electrical features.
 *
 * END ****************************************************************************************************************/
void BOARD_InitPins(void) {
  CLOCK_EnableClock(kCLOCK_Iomuxc);           

  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_12_LPUART1_TXD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_AD_B0_13_LPUART1_RXD, 0U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_00_FLEXSPI_B_DATA3, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_01_FLEXSPI_B_DATA2, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_02_FLEXSPI_B_DATA1, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_03_FLEXSPI_B_DATA0, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_04_FLEXSPI_B_SCLK, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_05_FLEXSPI_A_DQS, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_06_FLEXSPI_A_SS0_B, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_07_FLEXSPI_A_SCLK, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_08_FLEXSPI_A_DATA00, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_09_FLEXSPI_A_DATA1, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_10_FLEXSPI_A_DATA2, 1U); 
  IOMUXC_SetPinMux(IOMUXC_GPIO_SD_B1_11_FLEXSPI_A_DATA3, 1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_12_LPUART1_TXD, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_AD_B0_13_LPUART1_RXD, 0x10B0U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_00_FLEXSPI_B_DATA3, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_01_FLEXSPI_B_DATA2, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_02_FLEXSPI_B_DATA1, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_03_FLEXSPI_B_DATA0, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_04_FLEXSPI_B_SCLK, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_05_FLEXSPI_A_DQS, 0x0130F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_06_FLEXSPI_A_SS0_B, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_07_FLEXSPI_A_SCLK, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_08_FLEXSPI_A_DATA00, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_09_FLEXSPI_A_DATA1, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_10_FLEXSPI_A_DATA2, 0x10F1U); 
  IOMUXC_SetPinConfig(IOMUXC_GPIO_SD_B1_11_FLEXSPI_A_DATA3, 0x10F1U); 
}

/***********************************************************************************************************************
 * EOF
 **********************************************************************************************************************/
