/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC18F57Q43
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define RC4_SetPullup()             do { WPUCbits.WPUC4 = 1; } while(0)
#define RC4_ResetPullup()           do { WPUCbits.WPUC4 = 0; } while(0)
#define RC4_SetAnalogMode()         do { ANSELCbits.ANSELC4 = 1; } while(0)
#define RC4_SetDigitalMode()        do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define RC6_SetPullup()             do { WPUCbits.WPUC6 = 1; } while(0)
#define RC6_ResetPullup()           do { WPUCbits.WPUC6 = 0; } while(0)
#define RC6_SetAnalogMode()         do { ANSELCbits.ANSELC6 = 1; } while(0)
#define RC6_SetDigitalMode()        do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISDbits.TRISD7
#define CS_LAT                  LATDbits.LATD7
#define CS_PORT                 PORTDbits.RD7
#define CS_WPU                  WPUDbits.WPUD7
#define CS_OD                   ODCONDbits.ODCD7
#define CS_ANS                  ANSELDbits.ANSELD7
#define CS_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define CS_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define CS_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define CS_GetValue()           PORTDbits.RD7
#define CS_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define CS_SetPullup()          do { WPUDbits.WPUD7 = 1; } while(0)
#define CS_ResetPullup()        do { WPUDbits.WPUD7 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONDbits.ODCD7 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONDbits.ODCD7 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELDbits.ANSELD7 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELDbits.ANSELD7 = 0; } while(0)

// get/set LED0 aliases
#define LED0_TRIS                 TRISFbits.TRISF3
#define LED0_LAT                  LATFbits.LATF3
#define LED0_PORT                 PORTFbits.RF3
#define LED0_WPU                  WPUFbits.WPUF3
#define LED0_OD                   ODCONFbits.ODCF3
#define LED0_ANS                  ANSELFbits.ANSELF3
#define LED0_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define LED0_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define LED0_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define LED0_GetValue()           PORTFbits.RF3
#define LED0_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define LED0_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define LED0_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define LED0_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define LED0_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define LED0_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define LED0_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/