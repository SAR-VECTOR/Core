/******************** (C) COPYRIGHT 2022 < VECTOR >********************
* File Name          : HW_POWER.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 11/2022
* Description        : ������������ ���������� ����������� ����� �������
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_POWER_H)
#define _HW_POWER_H


/* Includes ------------------------------------------------------------------*/
#include "HW_Globals.h"
#include "stm32l1xx_hal_def.h"

/* Exported types ----------------------------------------------------------- */
/* Exported constants --------------------------------------------------------*/

typedef enum // ��������� ��������� ���������� ������� ���������
{
  RTC_POWER,				            // ������� ���������� �����
	FRAM_POWER,				            // ������� ���������� FRAM
	RF_MODULE_POWER				        // ������� ����������� LoRa
} Switched_power_supply_circuit;

typedef enum // ��������� ��������� ���������� ��������
{
  POWER_ON,				              	// ��������� �������
	POWER_OFF				                // ���������� �������
} Power_supply_circuit_status_after_switching;

typedef enum	// ��������� ��������� �������� ������������ �������
{
  SUPPLY_VOLTAGE_WAS_INTERRUPTED,				        // ���������� ������� �����������
	POWER_SUPPLY_WAS_OK				                // ���������� ������� �� �����������
} Continuity_Of_Supply_Voltage;

// ��������������������������������������������������������������������������������������������������������������


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
