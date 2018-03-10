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
#include "stdio.h"
#include "project.h"

//24MHz
#define MASTER_CLK 12000000
#define SMPL_SIZE 100
#define TR_TIME_MS 10000
#define IDLE_TIME_MS 500
#define SAMPLE_BUFFER_SIZE 2000

/* Capture Adc Data*/
int16 Output;
int16 Samples[SAMPLE_BUFFER_SIZE];
char TransmitUARTBuffer[16];

void CaptureADCData()
{
    int SampleIdx = 0;
    for(;;)
    {
        if(ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS))
        {
            Output = ADC_DelSig_1_GetResult16();
            Samples[SampleIdx] = Output;
            SampleIdx++;
            if(SampleIdx == SAMPLE_BUFFER_SIZE)
            {
                break;
            }
        }
    }
}

void SendBufferByUART()
{
    for(int SampleIdx = 0; SampleIdx < SAMPLE_BUFFER_SIZE; SampleIdx++)
    {
        sprintf(TransmitUARTBuffer, "%d\r\n", Samples[SampleIdx]);
        UART_1_PutString(TransmitUARTBuffer);
    }
}

int main(void)
{
    /* Variable to store UART received character */
    uint8 Ch;
    short Dac1Div, Dac2Div;
    uint8 InputReceived = 0;
    //Dac1 -> 1029 - 1477
    //Dac2 -> 697 - 941
    
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Initialize Components */
    Master_Clk_Stop();
    Opamp_1_Start();
    WaveDAC8_1_Start();
    WaveDAC8_2_Start();
    UART_1_Start();
    PWM_1_Start();
    PWM_2_Start();
    
    /* Start the ADC Conversion*/
    ADC_DelSig_1_Start();   // For Testing purposes
    ADC_DelSig_1_StartConvert();
    
    UART_1_PutString("COM Port Open");

    for(;;)
    {
        /* Non-blocking call to get the latest data recieved  */
        Ch = UART_1_GetChar();
        
        
        switch(Ch){
            case '1':
                Dac1Div = 99; //1209Hz
                Dac2Div = 172; //697Hz
                InputReceived = 1;
                break;
            case '2':
                Dac1Div = 90; //1336Hz
                Dac2Div = 172;//697Hz
                InputReceived = 1;
                break;
            case '3':
                Dac1Div = 81; //1477Hz
                Dac2Div = 172; //697Hz
                InputReceived = 1;
                break;
            case '4':
                Dac1Div = 99; //1209Hz
                Dac2Div = 156; //770Hz
                InputReceived = 1;
                break;
            case '5':
                Dac1Div = 90; //1336Hz
                Dac2Div = 156; //770Hz
                InputReceived = 1;
                break;
            case '6':
                Dac1Div = 81; //1477Hz
                Dac2Div = 156; //770Hz
                InputReceived = 1;
                break;
            case '7':
                Dac1Div = 99; //1209Hz
                Dac2Div = 141; //852Hz
                InputReceived = 1;
                break;
            case '8':
                Dac1Div = 90; //1336Hz
                Dac2Div = 141; //852Hz
                InputReceived = 1;
                break;
            case '9':
                Dac1Div = 81; //1477Hz
                Dac2Div = 141; //852Hz
                InputReceived = 1;
                break;
            case '*':
                Dac1Div = 99; //1209Hz
                Dac2Div = 128; //941Hz
                InputReceived = 1;
                break;
            case '0':
                Dac1Div = 90; //1336Hz
                Dac2Div = 128; //941Hz
                InputReceived = 1;
                break;
            case '#':
                Dac1Div = 81; //1477Hz
                Dac2Div = 128; //941Hz
                InputReceived = 1;
                break;
            default:
            break;
        }
        
        if(InputReceived)
        {
            //12MHz / DACFreq * Samples = Clk Divider
            PWM_1_WritePeriod(Dac1Div);
            PWM_2_WritePeriod(Dac2Div);
            
            Master_Clk_Start();
            CaptureADCData();       // Testing Purposes (in case of failure please contact Guille)
            CyDelay(TR_TIME_MS);
            Master_Clk_Stop();
            CyDelay(IDLE_TIME_MS);
            InputReceived = 0;
            SendBufferByUART();     // Testing Purposes (in case of failure please contact Guille)
        }
    }
}

/* [] END OF FILE */
