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

//24MHz
#define MSTR_CLK 24000000

int main(void)
{
    /* Variable to store UART received character */
    uint8 Ch;
    uint16 Dac1Output;
    uint16 Dac2Output;
    short Dac1Freq, Dac2Freq;
    uint8 InputReceived = 0;
    //Dac1 -> 1029 - 1477
    //Dac2 -> 697 - 941
    
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
            case '1':
                Dac1Freq = 1209;
                Dac2Freq = 697;
                InputReceived = 1;
                break;
            case '2':
                Dac1Freq = 1336;
                Dac2Freq = 697;
                InputReceived = 1;
                break;
            case '3':
                Dac1Freq = 1477;
                Dac2Freq = 697;
                InputReceived = 1;
                break;
            case '4':
                Dac1Freq = 1209;
                Dac2Freq = 770;
                InputReceived = 1;
                break;
            case '5':
                Dac1Freq = 1336;
                Dac2Freq = 770;
                InputReceived = 1;
                break;
            case '6':
                Dac1Freq = 1477;
                Dac2Freq = 770;
                InputReceived = 1;
                break;
            case '7':
                Dac1Freq = 1209;
                Dac2Freq = 852;
                InputReceived = 1;
                break;
            case '8':
                Dac1Freq = 1336;
                Dac2Freq = 852;
                InputReceived = 1;
                break;
            case '9':
                Dac1Freq = 1477;
                Dac2Freq = 852;
                InputReceived = 1;
                break;
            case '*':
                Dac1Freq = 1209;
                Dac2Freq = 941;
                InputReceived = 1;
                break;
            case '0':
                Dac1Freq = 1336;
                Dac2Freq = 941;
                InputReceived = 1;
                break;
            case '#':
                Dac1Freq = 1477;
                Dac2Freq = 941;
                InputReceived = 1;
                break;
            case 'e':
            case 'E':
                break;
            case 's':
            case 'S':
                break;
            default:
            break;
        }
        
        if(InputReceived)
        {
            //24MHz / DACFreq = Clk Divider
            Clock_1_SetDivider(MSTR_CLK / Dac1Freq);
            Clock_2_SetDivider(MSTR_CLK / Dac2Freq);
            InputReceived = 0;
        }
        
        WaveDAC8_1_
        
    }
}

/* [] END OF FILE */
