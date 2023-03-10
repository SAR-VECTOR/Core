/******************** (C) COPYRIGHT 2021 < Weidmueller >********************
* File Name					: HW_Globals.h
* Author						: Electronic Devices Developing Team
* Version						: V1.01
* Date							: 01/2021
* Description				: Declaring Global Parameters.
*******************************************************************************/



/* 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧 ﾁ璢? API HAL 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧

1) ﾂ ?琺?? stm32l1xx_hal_rtc.c 鈞????褊?頏?籵?? ??????:
          "sTime->SubSeconds = (uint32_t)((hrtc->Instance->SSR) & RTC_SSR_SS);"

2) ﾂ ?琺?? main.c ? ????裝??? MX_RTC_Init(void) 
    ? 硴??? "USER CODE BEGIN RTC_Init 2"
    蒡矜粨?? ??????:
    __HAL_RCC_RTC_ENABLE();

覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧 */

/*
 ﾂﾍﾈﾌﾀﾍﾈﾅ!!!!
 ﾊ??瑙蕘 ??襃???褥????:
 _DEBUG       - ????齏???? ?????? 蓁? ???琅??

*/



// !!!!!!!!!!!!!!!!!!! ﾎ??琅?? !!!!!!!!!!!!!!!!!!!!!!!!!!!
#define _DEBUG_ASSERT       // 糺粽? ??頷 ???碼褊韜 ?? OLED
#define USE_FULL_ASSERT

// #define UART2_PARAM_OLED
// #define _DEBUG_OLED_ENABLE

// !!!!!!!!!!!!!!!!!!! ﾎ??琅?? !!!!!!!!!!!!!!!!!!!!!!!!!!!


#if !defined (_HW_GLOBALS_H_)
#define _HW_GLOBALS_H_


/* Includes ------------------------------------------------------------------*/
#include "stm32l1xx_hal.h"





/* 覧覧覧覧覧覧覧覧 ﾑ???粢???粨? ?韵??, 頌????銛褌?? ????齏??????: 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧?

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

//* 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧? ﾍ瑜??竟琿?? ?? ?韵瑟 萵????, 粡??? 韈 stm8l15x.h 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧? 

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



//* 覧覧覧覧覧覧覧覧覧覧 ﾍ??褞 粢??韋 ???胙瑟?? 覧覧覧覧覧覧覧覧覧覧
#define VERSION                             "v 1.01"

//* 覧覧覧覧覧覧覧覧覧覧 ﾍ??褞 萵??韭? 覧覧覧覧覧覧覧覧覧覧覧覧覧覧?
#define SENSOR_NUMBER                       12


//* 覧覧覧覧覧覧覧覧覧覧 ﾊ????瑙?? 蓁? ?珮??? ? RTC (?瑰? ?裄????胛 糅褌褊? 粹???? ﾌﾊ) 覧覧覧覧覧覧覧覧覧覧

#define RTC_INIT_TIME_AND_DATE                // ﾐ珸?褸褊韃 ???粹?粲? ?瑰?? ? 萵?? ??? ?褞粽? 粲???褊韋 ??瑣? ( main.c / MX_RTC_Init() )




//* 覧覧覧覧覧覧覧覧覧覧 ﾊ????瑙?? 蓁? ?珮??? ? UART1 (?瑙琿 萵??韭?) 覧覧覧覧覧覧覧覧覧覧

#define BAUD_RATE_UART1                     115200        // ﾑ??????? ?碆褊? ?? UART1
// #define BAUD_RATE_UART1                     19200         // ﾑ??????? ?碆褊? ?? UART1
#define SIZE_OF_RECEIVE_BUFFER_UART1        128           // ﾐ珸?褞 ?瑰?鞣? 蓁? ??雕???胛 碯?褞? UART1
#define SIZE_OF_TRANSMIT_BUFFER_UART1       128           // ﾐ珸?褞 ?瑰?鞣? 蓁? ?褞裝???裙? 碯?褞? UART1
#define MAX_SIZE_OF_TRANSMITTED_DATA_UART1  8             // ﾌ瑕?. ?珸?褞 ?瑰?鞣? 蓁? 鈞????? 萵???? ?? UART1
#define TIME_OUT_OF_RECEIVER_UART1          500           // ﾒ琺?瑪? ?跖萵??? ??雕?? 萵???? ?? 萵??韭? ????? 鈞????? 萵????
#define TIME_OUT_OF_RECEIVER_BYTE_UART1     5             // ﾒ琺?瑪? ?跖萵??? ??雕?? ??褞裝??胛 矜鶯? ?瑕褪? 萵???? ?? 萵??韭?
#define TIME_OUT_OF_EMPTY_BUFFER_UART1      10            // ﾒ琺?瑪? ?跖萵??? ??頌??? 碯?褞?
#define TIME_OUT_OF_TRANSMITTER_UART1       500           // ﾒ琺?瑪? ?跖萵??? ?褞裝璞? ?瑕褪? 萵???? 萵??韭?



#define COMMAND_SET_SENSOR_TO_SLEEP         400           // ﾊ??瑙萵 "?????褊?? 萵??韭?"


// ﾀ蓿褥? ?瑰????趺??? 萵???? ? ?瑕褪?, ?????瑯??? ?? 萵??韭?
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
#define ADDRESS_AMBIENT_TEMPERATURE      22     // ﾂ ?珮?頽? ? ?裔?? ??鞦??, ??? ?? float (? uint8) ? ?瑰????趺? ?? 蓿?胛?? 琅?褥?!!!!!      
#define ADDRESS_LEVEL_OUT_PULSE          25           
#define ADDRESS_MEAS_ELEMENT_TEMP        29           
#define ADDRESS_MEAS_RANGE               43           



//* 覧覧覧覧覧覧覧覧覧覧 ﾊ????瑙?? 蓁? ?珮??? ? UART2 (?瑙琿 萵??韭?) 覧覧覧覧覧覧覧覧覧覧

#define BAUD_RATE_UART2                     9600          // ﾑ??????? ?碆褊? ?? UART2
#define SIZE_OF_RECEIVE_BUFFER_UART2        128           // ﾐ珸?褞 ?瑰?鞣? 蓁? ??雕???胛 碯?褞? UART2
#define SIZE_OF_TRANSMIT_BUFFER_UART2       128           // ﾐ珸?褞 ?瑰?鞣? 蓁? ?褞裝???裙? 碯?褞? UART2
#define MAX_SIZE_OF_TRANSMITTED_DATA_UART2  8             // ﾌ瑕?. ?珸?褞 ?瑰?鞣? 蓁? 鈞????? 萵???? ?? UART2
#define TIME_OUT_OF_RECEIVER_UART2          500           // ﾒ琺?瑪? ?跖萵??? ??雕?? 萵???? ?? 萵??韭? ????? 鈞????? 萵????
#define TIME_OUT_OF_RECEIVER_BYTE_UART2     10            // ﾒ琺?瑪? ?跖萵??? ??雕?? ??褞裝??胛 矜鶯? ?瑕褪? 萵???? ?? 萵??韭?
#define TIME_OUT_OF_EMPTY_BUFFER_UART2      10            // ﾒ琺?瑪? ?跖萵??? ??頌??? 碯?褞?
#define TIME_OUT_OF_TRANSMITTER_UART2       500           // ﾒ琺?瑪? ?跖萵??? ?褞裝璞? ?瑕褪? 萵???? 萵??韭?


//* 覧覧覧覧覧覧覧覧覧覧 ﾊ????瑙?? 蓁? ?珮??? ? RF-??蔘?褌 E32-900T20S 覧覧覧覧覧覧覧覧覧覧

#define PIN_RECOVER                         50    // ﾇ琅褞跛? ? ?? ?? ?裄???? RF-??蔘?? ?? ??褊? ??肛?褥?頷 ???粹裨 M0 ? M1 ? ?? ??褊? ?褂韲? ? ?瑟?? ??蔘??
#define AUX_TIMEOUT_AFTER_POWER_ON          1000   // ﾂ?褌? (? ??) ?跖萵??? ??琅? ?鞳?琿? AUX ????? ??萵?? ?頸瑙??
#define AUX_TIMEOUT_BEFORE_MODE_SWITCH      600   // ﾂ?褌? (? ??) ?跖萵??? ??琅? ?鞳?琿? AUX ?褞裝 ?褞裲???褊韃? ?褂韲? ?珮???
#define SIZE_OF_PARAMETERS_ARRAY            6     // ﾐ珸?褞 ?瑰?鞣? ?瑩瑟褪??? RF-??蔘??
#define SIZE_OF_ONE_PART_OF_TRANSMIT_DATA   512   // ﾌ瑕?. ?珸?褞 ?瑰?鞣? 萵????, ????珞??褌?? ? RF-??蔘?? 鈞 ?蒻? ??雕?

#define CODE_SEQUENCE_FOR_REQUESTING_PARAMETERS     {0xC1, 0xC1, 0xC1}


//* 覧覧覧覧覧覧覧覧覧覧 ﾌ瑰?? 礪??? ?頸瑙?? ?????鴦?? ??蔘?? 覧覧覧覧覧覧覧覧覧覧
// ﾅ蒻?顆?? ? ????粢???糒??褌 礪?? ?鈿璞瑯?, ??? ?????鴦?粽 鈞?頸瑙?
#define FRAM_POWER_FLAG             (u8) 0x01
#define RF_MODULE_POWER_FLAG  		  (u8)(FRAM_POWER				<< 1 )
#define LDO_POWER_FLAG              (u8)(FRAM_POWER       << 2 )
#define DC_DC_POWER_FLAG            (u8)(FRAM_POWER       << 3 )
#define RTC_POWER_FLAG              (u8)(FRAM_POWER       << 4 )
#define ALL_POWER_FLAGS_RESET       0U


typedef enum
{
	RETURN_OK = 0,																		 // ﾍ???琿???? 鈞粢??褊韃 ????裝???
	RETURN_FAIL = !RETURN_OK													 // ﾎ?鞦????? 鈞粢??褊韃 ????裝???
} Return_Status;

// typedef enum
// {
//   BUFFER_NOT_EMPTY = 0,                              // ﾍ琿顆韃 ??竟???? 竟????璋韋 ? 碯?褞? UART
//   BUFFER_EMPTY = !BUFFER_NOT_EMPTY
// } UART_Buffer_Empty_Flag;

/* ----------------------- PRINTF_BINARY macros ------------------------- */
// ﾌ瑕??? 糺粽萵 ?? ???瑙 葢?顆??胛 ??裝??珞?褊?? ?褞褌褊???
#define PRINTF_BINARY_PATTERN_INT8 " %c%c%c%c %c%c%c%c" // ???砒? 蒡矜粱褊 ???? 蓁? ????裙? 粽????????
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

// ﾊ????瑙?? 蓁? ???珞?褊?? ????瑟?
#define HIGH  GPIO_PIN_SET
#define LOW   GPIO_PIN_RESET


//覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧? GLOBAL VARIABLES 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧?
/* ?????瑙?? HW_MAIN ?磅?粱褊? ? ?琺?? Main.c !!!! */

/* ﾏ褞褌褊??? 蓁? ?褥???: */
// #if !defined (HW_MAIN)
//  extern
// #endif
//  uint8 g_TEST_u8_SampleCounter;   // ﾑ?ｸ??韭 ??褞?籵?韜 ?琥瑣?? ?? ?????? ????蒟??

#if !defined (HW_MAIN)
 extern
#endif
 uint32 g_TEST_u32_Val1;   // ﾑ?ｸ??韭 ??褞?籵?韜 ?琥瑣?? ?? ?????? ????蒟??

//**覧覧覧覧覧覧覧覧覧覧覧覧覧? ﾃ??矜????? ????????? ??竟???? ?? 萵??韭? 萵???? 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧?
#if !defined (HW_MAIN)
  extern
#endif
  struct ReceivedDataFromSensor
  {
    u8 u8_AddressOfSlaveDevice;       // ﾀ蓿褥 ??粢?鞣?裙? ?????鴦?籵
    
    u8 u8_FunctionalCode;             // ﾀ蓿褥 矜??? ?裙頌????
    
    u8 u8_NumberOfBytesReceived;      // ﾊ??顆褥?粽 ??竟???? ?? ??蔔竟ｸ???胛 ?????鴦?籵 矜鶯

    u16 u16_DeviceStatus;              // ﾑ?瑣?? ?????鴦?籵

    u8 u8_StatusOfPositioner_1;       // ﾑ??????韃 ??鉅?韶?褞? ｹ1

    float f_MeasuredValueOfPositioner_1; // ﾈ銕褞褊??? 鈿璞褊韃 ??鉅?韶?褞? 1

    u8 u8_StatusOfPositioner_2;       // ﾑ??????韃 ??鉅?韶?褞? ｹ2

    float f_MeasuredValueOfPositioner_2; // ﾈ銕褞褊??? 鈿璞褊韃 ??鉅?韶?褞? 2

    float f_SpeedOfSound;                // ﾑ??????? 鈔???

    u8 u8_AmbientTemperature;         // ﾒ褌?褞瑣??? ????赳??裨 ??裝?. ﾂ ?珮?頽? ? ?裔?? ??鞦??, ??? ?? float ? ?瑰????趺? ?? 蓿?胛?? 琅?褥?!!!!!

    float f_OutputPulseAmplitude;       // ﾀ???頸?萵 糺??蓖?胛 韲??????

    float f_TemperatureOfMeasuringElement;      // ﾒ褌?褞瑣??? 韈?褞頸褄???胛 ??褌褊??

    u8  u8_SoftwareVersion;             // ﾂ褞??? ﾏﾎ

    u8  u8_AO_Version;                  // ﾂ褞??? ﾀﾎ

    float f_MeasuringRange;             // ﾄ鞨?珸?? 韈?褞褊韜

  } g_s_DataFromSensor;




//**覧覧覧覧覧覧覧覧覧覧覧覧覧? ﾌ瑰?鞣 ?瑩瑟褪??? RF-??蔘?? 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧?

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
    u8 u8_a_ParametersArray [SIZE_OF_PARAMETERS_ARRAY]; // ?瑰?鞣 ?瑩瑟褪???
  } g_u_ParametersOfRFmodule;


//**覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧? ﾓ????鴦?籵 ? ?頌?褌? 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧
#if !defined (HW_MAIN)
	extern
#endif
  u8 g_u8_PowerLines;          // ﾏ褞褌褊???, ??瑙???? ? ?裔? 萵???? ? 鈞?頸瑙??? ?????鴦?籵?




// #if !defined (HW_MAIN)
//   extern
// #endif
//   union 
//   {
//     struct ReceivedDataFromSensor g_s_DataForSendingToStation;
//     float f_Data;
//   } status2;





 /*覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧? UARTx 覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧*/
// #if !defined (HW_MAIN)
//   extern
// #endif
//   u8 g_u8_UART0_ReceiveRingBuffer[SIZE_RECEIVE_RING_BUFFER_UART0];   // ﾁ??褞 ??韃?? UART0

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u8 g_u8_UART1_ReceiveRingBuffer[SIZE_RECEIVE_RING_BUFFER_UART1];   // ﾁ??褞 ??韃?? UART1

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u16 g_u16_UART0_ReceiveRingBufferIndex;            // ﾍ??褞 矜鶯? (?裲??韜 竟蒟??) ?????裘?胛 碯?褞? ??韃?? UART0

// #if !defined (HW_MAIN)
//   extern
// #endif
//   u16 g_u16_UART1_ReceiveRingBufferIndex;            // ﾍ??褞 矜鶯? (?裲??韜 竟蒟??) ?????裘?胛 碯?褞? ??韃?? UART1

// #if !defined (HW_MAIN)      // ﾔ?璢 ?琿顆?? ??顏裝?頷 ?? UART ??糺? 矜鶯?? 竟????璋韋
//   extern
// #endif
//   UART_Buffer_Empty_Flag  g_UART0_BufferEmptyFlag, g_UART1_BufferEmptyFlag;

//覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧覧

// ﾑ???????? 萵???? 蓁? ?珮??? ????? I2C1
#if !defined (HW_MAIN)
  extern
#endif
  I2C_HandleTypeDef I2C1_Struct;




// ﾎ碣珮???? ??鞦??
#if defined _DEBUG_ASSERT

  #define ASSERT(expr)                      \
    {                                       \
      if (!(expr))                          \
        DebugReport (__FILE__, __LINE__);   \
    }
#else
  #define ASSERT(expr)        ((void) 0)
#endif


#endif	// _HW_GLOBALS_H_ ____________________________________________________________________________________________________________________

