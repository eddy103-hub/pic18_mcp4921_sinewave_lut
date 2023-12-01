/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.00
 */

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
 */

#include "mcc_generated_files/mcc.h"
#include <math.h>


/* variables to be used
 */
uint8_t u8temp = 0;
uint8_t u8count = 0;
uint16_t u8value = 0;
uint8_t i;


uint16_t sins[128] = {

    2047, 2147, 2247, 2347, 2446, 2544, 2640, 2735,
    2829, 2921, 3010, 3098, 3182, 3265, 3344, 3420,
    3492, 3562, 3627, 3689, 3747, 3801, 3850, 3896,
    3937, 3973, 4005, 4031, 4054, 4071, 4084, 4091,
    4094, 4092, 4085, 4073, 4056, 4034, 4008, 3977,
    3941, 3901, 3856, 3807, 3753, 3696, 3635, 3569,
    3501, 3428, 3353, 3274, 3192, 3107, 3020, 2931,
    2840, 2746, 2651, 2555, 2457, 2358, 2259, 2159,
    2058, 1958, 1858, 1759, 1660, 1562, 1465, 1369,
    1276, 1184, 1094, 1006, 921, 839, 759, 683,
    610, 540, 474, 412, 353, 299, 249, 203,
    162, 125, 93, 65, 43, 25, 12, 3,
    0, 2, 8, 20, 36, 57, 83, 114,
    149, 189, 233, 281, 334, 391, 452, 517,
    585, 657, 733, 811, 893, 977, 1063, 1153,
    1244, 1337, 1432, 1528, 1626, 1725, 1824, 1924,

};

void dac(uint16_t value) {

    CS_SetLow();
    /*Send High Byte*/
    u8temp = (value >> 8)&0x0F; // Store bits 8:11 to temp
    u8temp |= 0x30; // Define DAC setting (choose 1x gain)
    SPI1_ExchangeByte(u8temp); // Send high byte via SPI

    /*Send Low Byte*/
    u8temp = value; // Store bits 0:7 to temp
    SPI1_ExchangeByte(u8temp); // Send low byte via SPI
    CS_SetHigh();
}

void updateDac(void) {
    u8value = (uint16_t) sins[u8count++];
    dac(u8value);
    if (u8count > 127) u8count = 0;

}

/*
                         Main application
 */
void main(void) {

    // Initialize the device
    SYSTEM_Initialize();
    
    SPI1_Open(0);
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
    
    TMR2_SetInterruptHandler(updateDac);
    while (1) {

    }
}
/**
 End of File
 */