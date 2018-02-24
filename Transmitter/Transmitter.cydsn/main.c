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
#define MASTER_CLK 24000000
#define SMPL_SIZE 100
#define TR_TIME_MS 500
#define IDLE_TIME_MS 500

int main(void)
{
    /* Variable to store UART received character */
    uint8 Ch;
    short Dac1Freq, Dac2Freq;
    uint8 InputReceived = 0;
    //Dac1 -> 1029 - 1477
    //Dac2 -> 697 - 941
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Initialize Components */
    WaveDAC8_1_Start();
    WaveDAC8_2_Start();
    UART_1_Start();
    PWM_1_Start();
    PWM_2_Start();
    
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
            //24MHz / DACFreq * Samples = Clk Divider
            PWM_1_WritePeriod(MASTER_CLK / (Dac1Freq * SMPL_SIZE));
            PWM_2_WritePeriod(MASTER_CLK / (Dac2Freq * SMPL_SIZE));
            
            Master_Clk_Start();
            CyDelay(TR_TIME_MS);
            Master_Clk_Stop();
            CyDelay(IDLE_TIME_MS);
            InputReceived = 0;
        }
        
        
    }
}

/* [] END OF FILE */
