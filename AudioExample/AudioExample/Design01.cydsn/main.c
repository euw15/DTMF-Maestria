#include "project.h"
#include "stdio.h"

/* Project Defines */
#define FALSE  0
#define TRUE   1
#define TRANSMIT_BUFFER_SIZE  16
#define N_SAMPLES_TO_CAPTURE 2000


/* Global data storage */
int16 databuffer[N_SAMPLES_TO_CAPTURE];


/*******************************************************************************
* Function Name: main
********************************************************************************
*
* Summary:
*  main() performs following functions:
*  1: Starts the ADC and UART components.
*  2: Checks for ADC end of conversion.  Stores latest result in output
*     if conversion complete.
*  3: Checks for UART input.
*     On 'C' or 'c' received: transmits the last sample via the UART.
*     On 'S' or 's' received: continuously transmits samples as they are completed.
*     On 'X' or 'x' received: stops continuously transmitting samples.
*     On 'E' or 'e' received: transmits a dummy byte of data.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
int main()
{
   /* Variable to store ADC result */
    int16 Output;
    /* Variable to store UART received character */
    uint8 Ch;
    /* Flags used to store transmit data commands */
    uint8 ContinuouslySendData;
    /* Transmit Buffer */
    char TransmitBuffer[TRANSMIT_BUFFER_SIZE];
    uint32 SampleCount;
    uint8 BufferFull;
    
    WaveDAC8_1_Start();
    /* Start the components */
    ADC_DelSig_1_Start();
    UART_1_Start();
    
    /* Initialize Variables */
    ContinuouslySendData = FALSE;
    
    /* Start the ADC conversion */
    ADC_DelSig_1_StartConvert();
    
    /* Send message to verify COM port is connected properly */
    UART_1_PutString("COM Port Open");
    
    for(;;)
    {        
        /* Non-blocking call to get the latest data recieved  */
        Ch = UART_1_GetChar();
        
        /* Set flags based on UART command */
        switch(Ch)
        {
            case 0:
                /* No new data was recieved */
                break;
            case 'S':
            case 's':
                ContinuouslySendData = TRUE;
                SampleCount = 0;
                BufferFull = 0;
                break;
            case 'X':
            case 'x':
                ContinuouslySendData = FALSE;
                break;
            default:
                /* Place error handling code here */
                break;    
        }
        
        /* Check to see if an ADC conversion has completed */
        if(ADC_DelSig_1_IsEndConversion(ADC_DelSig_1_RETURN_STATUS))
        {
            if(ContinuouslySendData)
            {
                /* Use the GetResult16 API to get an 8 bit unsigned result in
                 * single ended mode.  The API CountsTo_mVolts is then used
                 * to convert the ADC counts into mV before transmitting via
                 * the UART.  See the datasheet API description for more
                 * details */
                Output = ADC_DelSig_1_GetResult16();

                /* Copy the sample to the buffer */
                databuffer[SampleCount] = Output;

                //sprintf(TransmitBuffer, "%d\r\n", databuffer[SampleCount]);
                //UART_1_PutString(TransmitBuffer);
                
                /* Count 10000 samples and stop */
                SampleCount++;
                if (SampleCount >= N_SAMPLES_TO_CAPTURE)
                {
                    ContinuouslySendData = FALSE;

                    for (SampleCount=0; SampleCount<N_SAMPLES_TO_CAPTURE; SampleCount++)
                    {
                        /* Format ADC result for transmition */
                        /* Send out the data */
                        sprintf(TransmitBuffer, "%d\r\n", databuffer[SampleCount]);
                        UART_1_PutString(TransmitBuffer);
                    }
                    SampleCount = 0;
                    
                }
            }
        }
    }
}


/* [] END OF FILE */
