/******************** (C) COPYRIGHT 2021 < WEIDMUELLER >********************
* File Name          : HW_I2C.h
* Author             : Electronic Devices Application Team
* Version            : V1.01
* Date               : 12/2021
* Description        : ������������ ���������� ����������������� ������� I2C
********************************************************************************/

/* Define to prevent recursive inclusion -------------------------------------*/
#if !defined (_HW_I2C_H)
#define _HW_I2C_H


/* Includes ------------------------------------------------------------------*/
/* Exported types ----------------------------------------------------------- */
/* Exported constants --------------------------------------------------------*/

// ��������������������������������������������������������������������������������������������������������������
// **************      ������� ���������� ������������ OLED �������      ***************************

#define OLED1_128_64

#define LCDWIDTH                                           128
#define LCDHEIGHT                                          64

// ��� �������� � �������� ������ �����
typedef enum
{
  NORMAL = 0, // ����� �������� � ���������� ������������ ������ �������� ������� �� ����� ����                             
  INVERSION,  // ����� �������� ������ ������� �� ������� ����
  COMPACT     // ����� �������� � ������ ����
} TYPE_OF_PRINT;



// OLED display on controller SSD1306 (I2C 7bit address (bin) = 011'110[R/W] )
#define   OLED1_READ_7BIT_ADDRESS                          0x7A           // Address for reading data from OLED's registers
#define   OLED1_WRITE_7BIT_ADDRESS                         0x78           // Address for writing commands and data to OLED's registers

// ---------------------------------------------------------------------------------------------------
// ������ ���� ����������� ������� ��������� �������������
#define SETCONTRAST                                       0x81
// ������������� (��� �� �������) �������, ��������������� ��� ��������� �������
#define OLED_DEFAULT_CONTRAST                                1         
// ---------------------------------------------------------------------------------------------------


#define DISPLAYALLON_RESUME                               0xA4
#define DISPLAYALLON                                      0xA5
#define NORMALDISPLAY                                     0xA6
#define INVERTDISPLAY                                     0xA7

// ---------------------------------------------------------------------------------------------------
// ��������� ����������� ������� (��� �������� ���������� ��������, �������� ������ �����������)
#define DISPLAYOFF                                        0xAE
// �������� ����������� �� �������
#define DISPLAYON                                         0xAF  
// ---------------------------------------------------------------------------------------------------

#define SETDISPLAYOFFSET                                  0xD3
#define SETCOMPINS                                        0xDA

#define SETVCOMDETECT                                     0xDB

#define SETDISPLAYCLOCKDIV                                0xD5
#define SETPRECHARGE                                      0xD9

#define SETMULTIPLEX                                      0xA8

#define SETLOWCOLUMN                                      0x00
#define SETHIGHCOLUMN                                     0x10

#define SETSTARTLINE                                      0x40



// ---------------------------------------------------------------------------------------------------
// ������ ���� ����������� ������� ��������� ������ ���������
#define MEMORY_MODE                                       0x20
// �������� ������� ����� ����������� ������� ��������� ������ ���������
#define HORIZONTAL_ADDR                                      0 // �������������� ���������
#define COLUMN_ADDR                                       0x01 // ������������ ���������
#define PAGE_ADDR                                         0x02 // ������������ ���������
// ---------------------------------------------------------------------------------------------------
// ��������� (��������������) ����������� �� ���������
#define COM_SCAN_DEC                                      0xC8 // ���������� �����������
#define COM_SCAN_INC                                      0xC0 // ��������� �� ���������
// ---------------------------------------------------------------------------------------------------
// ��������� (��������������) ����������� �� �����������
#define NORMAL_SEG_REMAP                                  0xA1 // ���������� �����������
#define MIRROR_SEG_REMAP                                  0xA0 // ���������� �����������
// ---------------------------------------------------------------------------------------------------
// ���������� ��������� ����������� ���������� (������� �������)
#define CHARGE_PUMP                                       0x8D // ����� �������� ���������� �����������
#define CHARGEPUMP_ENABLE                                 0x14 // ������� "��������� ����������"
// ---------------------------------------------------------------------------------------------------



#define EXTERNALVCC                                       0x1
#define SWITCHCAPVCC                                      0x2

// Scrolling #defines
#define ACTIVATE_SCROLL                                   0x2F
#define DEACTIVATE_SCROLL                                 0x2E
#define SET_VERTICAL_SCROLL_AREA                          0xA3
#define RIGHT_HORIZONTAL_SCROLL                           0x26
#define LEFT_HORIZONTAL_SCROLL                            0x27
#define VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL              0x29
#define VERTICAL_AND_LEFT_HORIZONTAL_SCROLL               0x2A


//��������������������������������������������
#define OLED_NOP                                          0xE3

// #define OLED_BUFFERSIZE (LCDWIDTH * LCDHEIGHT)/8

#define OLED_COMMAND                                      0x00
#define OLED_DATA                                         0x40

#define I2C_TIMEOUT                                        100     // Waiting time for a response from the device

/* Module private variables --------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

void OLED1_Init(void);
HAL_StatusTypeDef OLED1_ClearOneRow (uint8 u8_Row);
HAL_StatusTypeDef OLED1_PrintFont_8x6(uint8 u8_Row, uint8 u8_Col, char const pu8_InString[]);
HAL_StatusTypeDef OLED1_Font_8x6_printf (uint8 u8_Row, uint8 u8_Col, const char *fmt, ... );

HAL_StatusTypeDef OLED1_PrintFont_56x42 (uint8 u8_Row, uint8 u8_Col, char const pu8_InString[]);
HAL_StatusTypeDef OLED1_Font_56x42_printf (uint8 u8_Row, uint8 u8_Col, const char *fmt, ... );

HAL_StatusTypeDef OLED1_Clear (void);

HAL_StatusTypeDef OLED1_PrintFont_16x12 (uint8 u8_Row, uint8 u8_Col, TYPE_OF_PRINT PrintType, TYPE_OF_PRINT FontType, char const pu8_InString[]);
HAL_StatusTypeDef OLED1_Font_16x12_printf (uint8 u8_Row, uint8 u8_Col, TYPE_OF_PRINT PrintType, TYPE_OF_PRINT FontType, const char *fmt, ...);

HAL_StatusTypeDef OLED1_NegativePrintFont_16x12 (uint8 u8_Row, uint8 u8_Col, char const pu8_InString[]);

/* Module private variables --------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */



#endif /* _HW_I2C_H */

/****END OF FILE****/
