/******************** (C) COPYRIGHT 2022 < VECTOR >********************
* File Name          : HW_SPI.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 11/2022
* Description        : Ïîäïðîãðàììû óïðàâëåíèÿ ïîñëåäîâàòåëüíûìè ïîðòàìè SPI
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_SPI_H)
#define _HW_SPI_H


/* Includes ------------------------------------------------------------------*/
#include "HW_Globals.h"
#include "stm32l1xx_hal_def.h"
#include "HW_POWER.h"

/* Exported types ----------------------------------------------------------- */
/* Exported constants --------------------------------------------------------*/

// CS2 --> "1"
#define __SAR_CS2_SPI2_SWITCH_TO_HIGH_LEVEL     HAL_GPIO_WritePin(SPI2_CS2_GPIO_Port, SPI2_CS2_Pin, GPIO_PIN_SET);

// CS2 --> "0"
#define __SAR_CS2_SPI2_SWITCH_TO_LOW_LEVEL     HAL_GPIO_WritePin(SPI2_CS2_GPIO_Port, SPI2_CS2_Pin, GPIO_PIN_RESET);


// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————


/* Module private variables --------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */
HAL_StatusTypeDef DataTransmitToFRAM_SPI2 (u8 *u8_p_TransmitData, u8 u8_SizeOfTransmitData, u16 u16_StartAddressInFRAM);
HAL_StatusTypeDef DataReceiveFromFRAM_SPI2 (u8 *u8_p_ReceiveData, u8 u8_SizeOfReceiveData, u16 u16_StartAddressInFRAM);




#endif /* _HW_SPI_H */

/****END OF FILE****/
