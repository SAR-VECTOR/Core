/******************** (C) COPYRIGHT 2022 < SAR > ********************************
* File Name          : HW_UART.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 03/2022
* Description        : Подпрограммы управления последовательными портами UART
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_UART_H)
#define _HW_UART_H

#include "HW_EBYTE.h"


// ——————————————————————————————————————————————————————————————————————————————————————————————————————————————
// **************      Команды управления портом UART      ***************************


// Статус выполнения подпрограммы приёма данных по UART
typedef enum
{
	UART_RECEIVING_OK,													// Нормальное завершение процедуры
	UART_RECEIVING_CRC_ERROR,                   // Данные приняты, но имеются ошибки контрольной суммы
  UART_RECEIVING_TIME_OUT_ERROR								// Данные или вообще не пришли, или пришли не полностью
} ModBus_Receiving_Return_Status;

typedef enum
{
	UART1_BUFFER_EMPTY,												// Нормальное завершение процедуры
  UART1_CLEARING_BUFFER_ERROR								// Выход по таймауту, данные всё время приходят и приходят, сколько их не чисть
} Clearing_UART1_Buffer_Return_Status;

typedef enum
{
	UART2_RECEIVING_OK,													// Нормальное завершение процедуры
	UART2_RECEIVING_ERROR,					              // Первый байт полученных данных не соответствует (д.б. 0xC0)
  UART2_RECEIVING_TIME_OUT_ERROR							// Данные или вообще не пришли, или пришли не полностью
} Receiving_Return_Status_UART2;

typedef enum
{
	UART2_TRANSMIT_OK,							              // Нормальное штатное завершение процедуры, данные отправлены
  UART2_TRANSMIT_TIME_OUT_ERROR		            // Данные не отправлены, ошибка UART2
} Transmit_Return_Status_UART2;


// Экспортные объявления функций
HAL_StatusTypeDef UART1_Transmit (uint8 *u8_pData, uint16 u16_Size, uint32 u32_Timeout);
HAL_StatusTypeDef UART2_Transmit (uint8 *u8_pData, uint16 u16_Size, uint32 u32_Timeout);
void UART1_Receive (void);
u16 ModBusChecksumCalculation ( u8* p_u8_InputData, u8 u8_LengthInputData );
HAL_StatusTypeDef ModBusRequestTransmitUART1 (u8 u8_SlaveAddress, u8 u8_FunctionCode, u8 u8_SizeRequestedData);
ModBus_Receiving_Return_Status ModBusReceivingDataFromSensorByUART1 ();
HAL_StatusTypeDef ModBusCommandTransmitUART1 (u8 u8_SlaveAddress, u16 u16_AddressOfFirstReg,
                                                 u16 u16_QuantityOfRegisters, u8 u8_NumberOfBytes,  u16* p_u16_TransmittedData);
Clearing_UART1_Buffer_Return_Status CyclicDataReadingWhileReceiveBufferIsNotEmpty_UART1 (u32 u32_MillisecondsWaitingCounter,
                                                                                                 u32 u32_WaitingTimeForBufferCleanup);
HAL_StatusTypeDef UART2_TransmitSensorsDataToBaseStation (u32 u32_Timeout);


#endif /* _HW_UART_H */

/**** END OF FILE ****/
