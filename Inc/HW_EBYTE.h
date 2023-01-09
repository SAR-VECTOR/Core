/******************** (C) COPYRIGHT 2022 < VECTOR >********************
* File Name          : HW_EBYTE.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 11/2022
* Description        : Подпрограммы управления обменом информации по радиоканалу
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_EBYTE_H)
#define _HW_EBYTE_H


/* Includes ------------------------------------------------------------------*/
// #include "stm32l1xx_hal_def.h"
// #include "HW_POWER.h"
#include "HW_UART.h"

/* Exported types ----------------------------------------------------------- */
/* Exported constants --------------------------------------------------------*/

typedef enum
{
	SAVE_THE_PARAMETERS_WHEN_POWER_DOWN = 0xC0,				      // При отключении питания параметры сохранятся
	DO_NOT_SAVE_THE_PARAMETERS_WHEN_POWER_DOWN = 0xC2				// При отключении питания параметры сбросятся в исходные, прописанные в модуле
} Saving_Parameters_When_Power_Down;

typedef enum
{ // Формат обмена с МКBAUD_RATE
	UART_8N1 = 0,														// 8 бит данных с одним стоповым
	UART_8O1 = 0x40,												// 8 бит данных, бит наличия НЕчётности, стоповый бит
	UART_8E1 = 0x80													// 8 бит данных, бит наличия чётности, стоповый бит
} UART_Parity_Bit;

typedef enum
{	// Скорость обмена между МК и RF-модулем в битах в секунду
	UART_BAUD_RATE_1200bps 		= 0,
	UART_BAUD_RATE_2400bps 		= 0x08,
	UART_BAUD_RATE_4800bps 		= 0x10,
	UART_BAUD_RATE_9600bps 		= 0x18,
	UART_BAUD_RATE_19200bps 	= 0x20,
	UART_BAUD_RATE_38400bps 	= 0x28,
	UART_BAUD_RATE_57600bps 	= 0x30,
	UART_BAUD_RATE_115200bps 	= 0x38
} UART_Baud_Rate;

typedef enum
{ // Скорость обмена по беспроводному каналу
	AIR_BAUD_RATE_300bps 		= 0,
	AIR_BAUD_RATE_1200bps 	= 1,
	AIR_BAUD_RATE_2400bps 	= 2,
	AIR_BAUD_RATE_4800bps 	= 3,
	AIR_BAUD_RATE_9600bps 	= 4,
	AIR_BAUD_RATE_19200bps 	= 5
} Air_Baud_Rate;

typedef enum
{
	TRANSPARENT_TRANSMISSION_MODE = 0,	// Широковещательный режим (все приёмники могут принимать данное сообщение)
	FIXED_TRANSMISSION_MODE = 0x80			// Фиксированный режим (первые байты сообщения содержат адрес приёмника, который должен принять сообщение)
} Transmission_Mode;

typedef enum
{
	OPEN_COLLECTOR_OUTPUTS_AND_FLOAT_INPUTS = 0, // ВЫХоды RF-модуля работают с открытым коллектором, ВХоды не утянуты к цепям питания
	PUSH_PULL_OUTPUTS_AND_PULL_UP_INPUTS = 0x40						// ВЫХоды RF-модуля работают как обычные выходы, ВХоды утянуты к плюсу питания
} Type_Of_Inputs_Outputs;

typedef enum
{	// Время пробуждения RF-модуля. Применение зависит от режима. Значение "default" - 250мс
	WAKE_UP_TIME_250MS 	= 0,
	WAKE_UP_TIME_500MS 	= 0x08,
	WAKE_UP_TIME_750MS 	= 0x10,
	WAKE_UP_TIME_1000MS = 0x18,
	WAKE_UP_TIME_1250MS = 0x20,
	WAKE_UP_TIME_1500MS = 0x28,
	WAKE_UP_TIME_1750MS = 0x30,
	WAKE_UP_TIME_2000MS = 0x38
} WirelessWakeUpTime;

typedef enum
{ // Защита от ошибок. Должна быть ВКЛючена (или ВЫКЛючена) одновременно на обоих сторонах беспроводного канала
	FEC_DISABLE = 0,
	FEC_ENABLE = 0x04
} FEC_Enable_Switch;

typedef enum
{ // Выходная мощность передатчика
	RF_POWER_20dBm = 0, // 100 mW
	RF_POWER_17dBm = 1,	// 50 mW
	RF_POWER_14dBm = 2,	// 25 mW
	RF_POWER_10dBm = 3	// 10 mW
} Transmission_Power_dBm;


//_Options = ((_OptionTrans & 0xFF) << 7) | ((_OptionPullup & 0xFF) << 6) | ((_OptionWakeup & 0xFF) << 3) | ((_OptionFEC & 0xFF) << 2) | (_OptionPower&0b11);


typedef enum
{
	MODE_NORMAL = 0,				          // can send and recieve
	MODE_WAKEUP,				              // sends a preamble to waken receiver
	MODE_POWERDOWN,				          	// can't transmit but receive works only in wake up mode
	MODE_PROGRAM				              // for programming
} Operating_Mode;

typedef enum
{
	CHANNEL_6_FREQUENCY_868_MHZ = 6,		// Частота беспроводного канала 868 Мгц
	CHANNEL_7_FREQUENCY_869_MHZ = 7		  // Частота беспроводного канала 869 Мгц
} Wireless_Channel;

typedef enum
{
	SWITCHED_MODE_NORMALLY,				                        // переключение выполнено
	NO_AUX_OUTPUT_AFTER_POWER_ON,				                  // ошибка, сигнал AUX у RF-модуля не переключился в "0" после включения питания
	NO_AUX_OUTPUT_BEFORE_MODE_SWITCHING				            // ошибка, сигнал AUX у RF-модуля не переключился в "0" перед переключением режима
} Return_Status_After_Operating_Changes;

typedef enum
{
	SWITCHING_OF_CHANNEL_IS_PERFORMED_NORMALLY,				       // переключение выполнено
	SWITCHING_OF_CHANNEL_FAILED				                       // переключение не выполнено, ошибка
} Wireless_Channel_Switching_Status;

typedef enum
{
	SWITCHING_OF_ADDRESS_IS_PERFORMED_NORMALLY,				       // переключение выполнено
	SWITCHING_OF_ADDRESS_FAILED				                       // переключение не выполнено, ошибка
} Wireless_Address_Switching_Status;


/* Module private variables --------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

Return_Status_After_Operating_Changes    SetOperatingModeRFmodule_E32_900T20S (Operating_Mode OperatingMode);
HAL_StatusTypeDef TransmitDataToRFmodule_E32_900T20S (u8 *p_u8_pData, u16 u16_DataSize);
HAL_StatusTypeDef ReceivingParametersFromRFmodule ();
HAL_StatusTypeDef RequestParametersFromRFmodule();
HAL_StatusTypeDef SetParametersOfRFmodule( Saving_Parameters_When_Power_Down SavingParameter,
                                            UART_Baud_Rate UART_BaudRate,
                                              UART_Parity_Bit UART_BitsFormat,
                                                u16 u16_WirelessDeviceAddress,
                                                  Air_Baud_Rate AirBaudRate,
                                                    Wireless_Channel Channel,
                                                      Transmission_Mode TransmitMode,
                                                        Type_Of_Inputs_Outputs TypeOfPins,
                                                          WirelessWakeUpTime WakeUpTime,
                                                            FEC_Enable_Switch FEC_Switch,
                                                              Transmission_Power_dBm TransmitPower );

#endif /* _HW_EBYTE_H */

/****END OF FILE****/
