/******************** (C) COPYRIGHT 2022 < VECTOR >********************
* File Name          : HW_POWER.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 11/2022
* Description        : Подпрограммы управления коммутацией цепей питания
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_POWER_H)
#define _HW_POWER_H


/* Includes ------------------------------------------------------------------*/
#include "HW_Globals.h"
#include "stm32l1xx_hal_def.h"

/* Exported types ----------------------------------------------------------- */
/* Exported constants --------------------------------------------------------*/

typedef enum // Аргументы процедуры коммутации питания устройств
{
  RTC_POWER,				            // Питание микросхемы часов
	FRAM_POWER,				            // Питание микросхемы FRAM
	RF_MODULE_POWER				        // Питание радиомодуля LoRa
} Switched_power_supply_circuit;

typedef enum // Аргументы процедуры управления питанием
{
  POWER_ON,				              	// ВКЛючение питания
	POWER_OFF				                // ВЫКЛючение питания
} Power_supply_circuit_status_after_switching;

typedef enum	// Аргументы процедуры проверки исчезновения питания
{
  SUPPLY_VOLTAGE_WAS_INTERRUPTED,				        // Напряжение питания прерывалось
	POWER_SUPPLY_WAS_OK				                // Напряжение питания НЕ прерывалось
} Continuity_Of_Supply_Voltage;

// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————


/* Module private variables --------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
void PowerSwitch (Switched_power_supply_circuit PowerCircuit, Power_supply_circuit_status_after_switching PowerStatus);
void GoToSTANDBYmode ();
Continuity_Of_Supply_Voltage WhatWasStateOfSupplyVoltage ();
void WakingUpInNextMinuteAtRightSecond (u8 u8_WakeUpSecond);


#endif /* _HW_POWER_H */

/****END OF FILE****/
