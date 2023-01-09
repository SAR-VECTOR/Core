/******************** (C) COPYRIGHT 2021 < Weidmueller >********************
* File Name					: HW_Globals.h
* Author						: Electronic Devices Developing Team
* Version						: V1.01
* Date							: 01/2021
* Description				: Declaring Global Parameters.
*******************************************************************************/



/* �������������������������������� ���� API HAL ��������������������������������

1) � ����� stm32l1xx_hal_rtc.c ���������������� ������:
          "sTime->SubSeconds = (uint32_t)((hrtc->Instance->SSR) & RTC_SSR_SS);"

2) � ����� main.c � ��������� MX_RTC_Init(void) 
    � ����� "USER CODE BEGIN RTC_Init 2"
    �������� ������:
    __HAL_RCC_RTC_ENABLE();

�������������������������������������������������������������������������������� */

/*
 ��������!!!!
 ������� �������������:
 _DEBUG       - ���������� ������ ��� �������

*/



// !!!!!!!!!!!!!!!!!!! ������� !!!!!!!!!!!!!!!!!!!!!!!!!!!
#define _DEBUG_ASSERT
#define USE_FULL_ASSERT

// #define UART2_PARAM_OLED
// #define _DEBUG_OLED_ENABLE

// !!!!!!!!!!!!!!!!!!! ������� !!!!!!!!!!!!!!!!!!!!!!!!!!!


#if !defined (_HW_GLOBALS_H_)
#define _HW_GLOBALS_H_


/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"





/* ���������������� ������������ �����, ������������ ������������: �����������������������������������

int8_t, uint8_t	                      signed char, unsigned char
int16_t, uint16_t	                    short, unsigned short
int32_t, uint32_t	                    int, unsigned int
int64_t, uint64_t	                    long long, unsigned long long
int_least8_t, uint_least8_t	          signed char, unsigned char
int_least16_t, uint_least16_t	        short, unsigned short
int_least32_t, uint_least32_t	        int, unsigned int
int_least64_t, uint_least64_t	        long long, unsigned long long
int_fast8_t, uint_fast8_t	            signed char, unsigned char
int_fast16_t, uint_fast16_t	          int, unsigned int
int_fast32_t, uint_fast32_t	          int, unsigned int
int_fast64_t, uint_fast64_t	          long long, unsigned long long
intmax_t, uintmax_t	long              long, unsigned long long

__enable_irq() 
__disable_irq()
__get_PRIMASK()
__set_PRIMASK()
 
 */

//* ������������������������������� ����������� �� ����� ������, ����� �� stm8l15x.h ������������������������������� 

// #define     __I     volatile const   /*!< defines 'read only' permissions     */
// #define     __O     volatile         /*!< defines 'write only' permissions    */
// #define     __IO    volatile         /*!< defines 'read / write' permissions  */

// Standard Peripheral Library old types (maintained for legacy purpose)

typedef int64_t     s64;
typedef int32_t     s32;
typedef int16_t     s16;
typedef int8_t      s8;

typedef uint64_t    u64;
typedef uint32_t    u32;
typedef uint16_t    u16;
typedef uint8_t     u8;


typedef int_least8_t    int8;
typedef int_least16_t   int16;
typedef int_least32_t   int32;
typedef int_least64_t   int64;

typedef uint_least8_t	  uint8;
typedef uint_least16_t  uint16;
typedef uint_least32_t  uint32;
typedef uint_least64_t  uint64;


// OUTSIDE MACROS

// #define SET_BIT(REG, BIT)     ((REG) |= (BIT))

// #define CLEAR_BIT(REG, BIT)   ((REG) &= ~(BIT))

// #define READ_BIT(REG, BIT)    ((REG) & (BIT))

// #define CLEAR_REG(REG)        ((REG) = (0x0))

// #define WRITE_REG(REG, VAL)   ((REG) = (VAL))

// #define READ_REG(REG)         ((REG))

// #define MODIFY_REG(REG, CLEARMASK, SETMASK)  WRITE_REG((REG), (((READ_REG(REG)) & (~(CLEARMASK))) | (SETMASK)))



//* �������������������� ����� ������ ��������� ��������������������
#define VERSION                             "v 1.01"

//* �������������������� ����� ������� �����������������������������
#define SENSOR_NUMBER                       12


//* �������������������� ��������� ��� ������ � RTC (���� ��������� ������� ������ ��) ��������������������

#define RTC_INIT_TIME_AND_DATE                // ���������� ��������� ����� � ���� ��� ������ ��������� ����� ( main.c / MX_RTC_Init() )




//* �������������������� ��������� ��� ������ � UART1 (����� �������) ��������������������

#define BAUD_RATE_UART1                     115200        // �������� ������ �� UART1
// #define BAUD_RATE_UART1                     19200         // �������� ������ �� UART1
#define SIZE_OF_RECEIVE_BUFFER_UART1        128           // ������ ������� ��� �������� ������ UART1
#define SIZE_OF_TRANSMIT_BUFFER_UART1       128           // ������ ������� ��� ����������� ������ UART1
#define MAX_SIZE_OF_TRANSMITTED_DATA_UART1  8             // ����. ������ ������� ��� ������� ������ �� UART1
#define TIME_OUT_OF_RECEIVER_UART1          500           // ������� �������� ����� ������ �� ������� ����� ������� ������
#define TIME_OUT_OF_RECEIVER_BYTE_UART1     5             // ������� �������� ����� ���������� ����� ������ ������ �� �������
#define TIME_OUT_OF_EMPTY_BUFFER_UART1      10            // ������� �������� ������� ������
#define TIME_OUT_OF_TRANSMITTER_UART1       500           // ������� �������� �������� ������ ������ �������



#define COMMAND_SET_SENSOR_TO_SLEEP         400           // ������� "��������� �������"


// ������ ������������ ������ � ������, ���������� �� �������
#define ADDRESS_ADDRESS_SLAVE_DEVICE     0           
#define ADDRESS_FUNCTIONAL_CODE          1           
#define ADDRESS_STATUS_DEVISE            4           
#define ADDRESS_STATUS_POSITIONER_1      6           
#define ADDRESS_STATUS_POSITIONER_2      12           
#define ADDRESS_SOFTWARE_VERSION         39           
#define ADDRESS_AO_VERSION               40           
#define ADDRESS_LEVEL_POSITIONER_1       7           
#define ADDRESS_LEVEL_POSITIONER_2       13           
#define ADDRESS_SPEED_OF_SOUND           17           
#define ADDRESS_AMBIENT_TEMPERATURE      22     // � ������� � ����� ������, ��� �� float (� uint8) � ���������� �� ������� ������!!!!!      
#define ADDRESS_LEVEL_OUT_PULSE          25           
#define ADDRESS_MEAS_ELEMENT_TEMP        29           
#define ADDRESS_MEAS_RANGE               43           



//* �������������������� ��������� ��� ������ � UART2 (����� �������) ��������������������

#define BAUD_RATE_UART2                     9600          // �������� ������ �� UART2
#define SIZE_OF_RECEIVE_BUFFER_UART2        128           // ������ ������� ��� �������� ������ UART2
#define SIZE_OF_TRANSMIT_BUFFER_UART2       128           // ������ ������� ��� ����������� ������ UART2
#define MAX_SIZE_OF_TRANSMITTED_DATA_UART2  8             // ����. ������ ������� ��� ������� ������ �� UART2
#define TIME_OUT_OF_RECEIVER_UART2          500           // ������� �������� ����� ������ �� ������� ����� ������� ������
#define TIME_OUT_OF_RECEIVER_BYTE_UART2     10            // ������� �������� ����� ���������� ����� ������ ������ �� �������
#define TIME_OUT_OF_EMPTY_BUFFER_UART2      10            // ������� �������� ������� ������
#define TIME_OUT_OF_TRANSMITTER_UART2       500           // ������� �������� �������� ������ ������ �������


//* �������������������� ��������� ��� ������ � RF-������� E32-900T20S ��������������������

#define PIN_RECOVER                         50    // �������� � �� �� ������� RF-������ �� ����� ���������� ������� M0 � M1 � �� ����� ������ � ����� ������
#define AUX_TIMEOUT_AFTER_POWER_ON          1000   // ����� (� ��) �������� ����� ������� AUX ����� ������ �������
#define AUX_TIMEOUT_BEFORE_MODE_SWITCH      600   // ����� (� ��) �������� ����� ������� AUX ����� ������������� ������ ������
#define SIZE_OF_PARAMETERS_ARRAY            6     // ������ ������� ���������� RF-������
#define SIZE_OF_ONE_PART_OF_TRANSMIT_DATA   512   // ����. ������ ������� ������, ������������ � RF-������ �� ���� ����

#define CODE_SEQUENCE_FOR_REQUESTING_PARAMETERS     {0xC1, 0xC1, 0xC1}


//* �������������������� ����� ����� ������� ��������� ������ ��������������������
// �������� � ��������������� ���� ��������, ��� ���������� ��������
#define FRAM_POWER_FLAG             (u8) 0x01
#define RF_MODULE_POWER_FLAG  		  (u8)(FRAM_POWER				<< 1 )
#define LDO_POWER_FLAG              (u8)(FRAM_POWER       << 2 )
#define DC_DC_POWER_FLAG            (u8)(FRAM_POWER       << 3 )
#define RTC_POWER_FLAG              (u8)(FRAM_POWER       << 4 )
#define ALL_POWER_FLAGS_RESET       0U


typedef enum
{
	RETURN_OK = 0,																		 // ���������� ���������� ���������
	RETURN_FAIL = !RETURN_OK													 // ��������� ���������� ���������
} Return_Status;

// typedef enum
// {
//   BUFFER_NOT_EMPTY = 0,                              // ������� �������� ���������� � ������ UART
//   BUFFER_EMPTY = !BUFFER_NOT_EMPTY
// } UART_Buffer_Empty_Flag;

/* ----------------------- PRINTF_BINARY macros ------------------------- */
// ������ ������ �� ����� ��������� ������������� ����������
#define PRINTF_BINARY_PATTERN_INT8 " %c%c%c%c %c%c%c%c" // ������ �������� ���� ��� ������� ����������
#define PRINTF_BYTE_TO_BINARY_INT8(i)    \
    (((i) & 0x80ll) ? '1' : '0'), \
    (((i) & 0x40ll) ? '1' : '0'), \
    (((i) & 0x20ll) ? '1' : '0'), \
    (((i) & 0x10ll) ? '1' : '0'), \
    (((i) & 0x08ll) ? '1' : '0'), \
    (((i) & 0x04ll) ? '1' : '0'), \
    (((i) & 0x02ll) ? '1' : '0'), \
    (((i) & 0x01ll) ? '1' : '0')

#define PRINTF_BINARY_PATTERN_INT16 \
    PRINTF_BINARY_PATTERN_INT8              PRINTF_BINARY_PATTERN_INT8
#define PRINTF_BYTE_TO_BINARY_INT16(i) \
    PRINTF_BYTE_TO_BINARY_INT8((i) >> 8),   PRINTF_BYTE_TO_BINARY_INT8(i)
#define PRINTF_BINARY_PATTERN_INT32 \
    PRINTF_BINARY_PATTERN_INT16             PRINTF_BINARY_PATTERN_INT16
#define PRINTF_BYTE_TO_BINARY_INT32(i) \
    PRINTF_BYTE_TO_BINARY_INT16((i) >> 16), PRINTF_BYTE_TO_BINARY_INT16(i)
#define PRINTF_BINARY_PATTERN_INT64    \
    PRINTF_BINARY_PATTERN_INT32             PRINTF_BINARY_PATTERN_INT32
#define PRINTF_BYTE_TO_BINARY_INT64(i) \
    PRINTF_BYTE_TO_BINARY_INT32((i) >> 32), PRINTF_BYTE_TO_BINARY_INT32(i)

// Example:
// long long int flag = 1648646756487983144ll;
//     printf("My Flag: " PRINTF_BINARY_PATTERN_INT64, PRINTF_BYTE_TO_BINARY_INT64(flag));
// OLED1_Font_8x6_printf(5, 1, PRINTF_BINARY_PATTERN_INT8 " - Rate", PRINTF_BYTE_TO_BINARY_INT8 (g_u_ParametersOfRFmodule.u8_a_ParametersArray[3]));
/* ----------------------------------- end printf macros ---------------------------------- */

// ��������� ��� ���������� �������
#define HIGH  GPIO_PIN_SET
#define LOW   GPIO_PIN_RESET


//��������������������������������������� GLOBAL VARIABLES ���������������������������������������������������
/* ��������� HW_MAIN ��������� � ����� Main.c !!!! */

/* ���������� ��� ������: */
// #if !defined (HW_MAIN)
//  extern
// #endif
//  uint8 g_TEST_u8_SampleCounter;   // ������� ���������� ������� �� ������ ��������

#if !defined (HW_MAIN)
 extern
#endif
 uint32 g_TEST_u32_Val1;   // ������� ���������� ������� �� ������ ��������

//**��������������������������� ���������� ��������� �������� �� ������� ������ ���������������������������������������������������
#if !defined (HW_MAIN)
  extern
#endif
  struct ReceivedDataFromSensor
  {
    u8 u8_AddressOfSlaveDevice;       // ����� ����������� ����������
    
    u8 u8_FunctionalCode;             // ����� ����� ���������
    
    u8 u8_NumberOfBytesReceived;      // ���������� �������� �� ����������� ���������� ����

    u16 u16_DeviceStatus;              // ������ ����������

    u8 u8_StatusOfPositioner_1;       // ��������� ����������� �1

    float f_MeasuredValueOfPositioner_1; // ���������� �������� ����������� 1

    u8 u8_StatusOfPositioner_2;       // ��������� ����������� �2

    float f_MeasuredValueOfPositioner_2; // ���������� �������� ����������� 2

    float f_SpeedOfSound;                // �������� �����

    u8 u8_AmbientTemperature;         // ����������� ���������� �����. � ������� � ����� ������, ��� �� float � ���������� �� ������� ������!!!!!

    float f_OutputPulseAmplitude;       // ��������� ��������� ��������

    float f_TemperatureOfMeasuringElement;      // ����������� �������������� ��������

    u8  u8_SoftwareVersion;             // ������ ��

    u8  u8_AO_Version;                  // ������ ��

    float f_MeasuringRange;             // �������� ���������

  } g_s_DataFromSensor;




//**��������������������������� ������ ���������� RF-������ ���������������������������������������������������

	// _s->write(val);
	// _s->write(_AddressHigh);
	// _s->write(_AddressLow);
	// _s->write(_Speed);
	// _s->write(_Channel);
	// _s->write(_Options);

	// _ParityBit = (_Speed & 0XC0) >> 6;
	// _UARTDataRate = (_Speed & 0X38) >> 3;
	// _AirDataRate = _Speed & 0X07;

	// _OptionTrans = (_Options & 0X80) >> 7;
	// _OptionPullup = (_Options & 0X40) >> 6;
	// _OptionWakeup = (_Options & 0X38) >> 3;
	// _OptionFEC = (_Options & 0X07) >> 2;
	// _OptionPower = (_Options & 0X03);



#if !defined (HW_MAIN)
  extern
#endif
  union 
  {
    struct ParametersStruct
    {
      u8 u8_Command;
      u8 u8_AddressHigh;
      u8 u8_AddressLow;
      u8 u8_Speed;
      u8 u8_Channel;
      u8 u8_Options;
    } Parameter;
    u8 u8_a_ParametersArray [SIZE_OF_PARAMETERS_ARRAY]; // ������ ����������
  } g_u_ParametersOfRFmodule;


//**������������������������������� ���������� � ������� ��������������������������������
#if !defined (HW_MAIN)
	extern
#endif
  u8 g_u8_PowerLines;          // ����������, �������� � ���� ������ � ���������� �����������




// #if !defined (HW_MAIN)
//   extern
// #endif
//   union 
//   {
//     struct ReceivedDataFromSensor g_s_DataForSendingToStation;
//     float f_Data;
//   } status2;





 /*������������������������������� UARTx ��������������������������������*/
// #if !defined (HW_MAIN)
//   extern
// #endif
//   u8 g_u8_UART0_ReceiveRingBuffer[SIZE_RECEIVE_RING_BUFFER_UART0];   // ����� ������ UART0

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u8 g_u8_UART1_ReceiveRingBuffer[SIZE_RECEIVE_RING_BUFFER_UART1];   // ����� ������ UART1

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u16 g_u16_UART0_ReceiveRingBufferIndex;            // ����� ����� (������� ������) ���������� ������ ������ UART0

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u16 g_u16_UART1_ReceiveRingBufferIndex;            // ����� ����� (������� ������) ���������� ������ ������ UART1

// #if !defined (HW_MAIN)      // ���� ������� ��������� �� UART ����� ������ ����������
//   extern
// #endif
//   UART_Buffer_Empty_Flag  g_UART0_BufferEmptyFlag, g_UART1_BufferEmptyFlag;

//��������������������������������������������

// ��������� ������ ��� ������ ����� I2C1
#if !defined (HW_MAIN)
  extern
#endif
  I2C_HandleTypeDef I2C1_Struct;









#endif	// _HW_GLOBALS_H_

