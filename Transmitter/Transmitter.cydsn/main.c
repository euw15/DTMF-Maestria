/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"

int main(void)
{
    /* Variable to store UART received character */
    uint8 Ch;
    uint16 Dac1Output;
    uint16 Dac2Output;
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Initialize Components */
    WaveDAC8_1_Start();
    WaveDAC8_2_Start();
    UART_1_Start();
    Clock_1_Start();
    Clock_2_Start();
    
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Non-blocking call to get the latest data recieved  */
        Ch = UART_1_GetChar();
        
        switch(Ch){
            case '0':
            break;
            case '1':
            break;
            case '2':
            break;
            case '3':
            break;
            case '4':
            break;
            case '5':
            break;
            case '6':
            break;
            case '7':
            break;
            case '8':
            break;
            case '9':
            break;
            case '*':
            break;
            case '#':
            break;
            case 'e':
            case 'E':
            break;
            case 's':
            case 'S':
            break;
        }
        
    }
}

/* [] END OF FILE */
