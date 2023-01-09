/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);
void DebugReport (char* pcc_FileName, uint16_t u16_LineNo);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED_VD7_Pin GPIO_PIN_13
#define LED_VD7_GPIO_Port GPIOC
#define OSC32_IN_Pin GPIO_PIN_14
#define OSC32_IN_GPIO_Port GPIOC
#define OSC32_OUT_Pin GPIO_PIN_15
#define OSC32_OUT_GPIO_Port GPIOC
#define OSC_IN_Pin GPIO_PIN_0
#define OSC_IN_GPIO_Port GPIOH
#define OSC_OUT_Pin GPIO_PIN_1
#define OSC_OUT_GPIO_Port GPIOH
#define TxE1_Pin GPIO_PIN_1
#define TxE1_GPIO_Port GPIOA
#define SPI1_CS1_Pin GPIO_PIN_4
#define SPI1_CS1_GPIO_Port GPIOA
#define SPI2_CS2_Pin GPIO_PIN_0
#define SPI2_CS2_GPIO_Port GPIOB
#define WDT_DONE_Pin GPIO_PIN_12
#define WDT_DONE_GPIO_Port GPIOB
#define SPI2_SCK_Pin GPIO_PIN_13
#define SPI2_SCK_GPIO_Port GPIOB
#define MISO2_Pin GPIO_PIN_14
#define MISO2_GPIO_Port GPIOB
#define MOSI2_Pin GPIO_PIN_15
#define MOSI2_GPIO_Port GPIOB
#define TxE3_Pin GPIO_PIN_12
#define TxE3_GPIO_Port GPIOA
#define DRV_RF_Pin GPIO_PIN_15
#define DRV_RF_GPIO_Port GPIOA
#define DRV_RTC_Pin GPIO_PIN_3
#define DRV_RTC_GPIO_Port GPIOB
#define DRV_FRAM_Pin GPIO_PIN_4
#define DRV_FRAM_GPIO_Port GPIOB
#define E32_M0_Pin GPIO_PIN_5
#define E32_M0_GPIO_Port GPIOB
#define E32_M1_Pin GPIO_PIN_8
#define E32_M1_GPIO_Port GPIOB
#define E32_AUX_Pin GPIO_PIN_9
#define E32_AUX_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

#define UART2_GPIO_Port GPIOA
#define UART2_Tx_Pin GPIO_PIN_2
#define UART2_Rx_Pin GPIO_PIN_3


#if defined _DEBUG_ASSERT

  #define ASSERT(expr)                      \
    {                                       \
      if (!(expr))                          \
        DebugReport (__FILE__, __LINE__);   \
    }
#else
  #define ASSERT(expr)        ((void) 0)
#endif


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
