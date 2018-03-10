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
#include <project.h>
#include <math.h>
#include <stdlib.h>
#include "stdio.h"
#include "FFT.h"

#define SAMPLES 128
//#define PI 3.14159265
#define size 100
#define FALSE 0
#define TRUE 1

uint8 sendData;
uint8 counter;
uint16 allSamples[SAMPLES];
char buffer[100];

CY_ISR_PROTO(Sig);

CY_ISR(Sig)
{
    uint16 out = ADC_DelSig_1_GetResult16();
    if(sendData)
    {
        allSamples[counter]=out;
        counter++;
        if(counter==SAMPLES)
        {
            counter=0;
            sendData=FALSE;
            
            int ks[] = {28,31,34,38,48,53,59};
            //double IN[SAMPLES];
            double OUT_re=0;
            double OUT_im=0;
            //double t = 0;
            /*int f1 = 1209;
            int f2 = 770;
            for(int i = 0; i<SAMPLES; i++)
            {
        	    IN[i] = sin(2*PI*t*f1)+sin(2*PI*t*f2);
        	    t += 1.0/3200;
        		//printf("%f: %f\r\n", t, IN[i]);
            }  
             */
        	for(int k = 0; k<7; k++){
        		OUT_re=0;
        		OUT_im=0;
        		for(int n = 0; n<SAMPLES; n++)
        		{
        		   OUT_re += allSamples[n]*cos(-2.0*PI*ks[k]*n/SAMPLES);
        		   OUT_im += allSamples[n]*sin(-2.0*PI*ks[k]*n/SAMPLES);	   
        		}
        		double val = OUT_im*OUT_im+OUT_re*OUT_re;
        		sprintf(buffer,"%d : %d\r\n", (int)val, (int)(ks[k]*3200.0/SAMPLES));
                UART_1_PutString(buffer);
        	}
        }
    }
}

int main()
{
  
    UART_1_Start();    
    WaveDAC8_1_Start();
    ADC_DelSig_1_Start();
    ADC_DelSig_1_StartConvert();
    
    Timer_1_Start();
    isr_1_StartEx(Sig);    
    CyGlobalIntEnable;
    
    counter = 0;
    sendData = FALSE;
    
    for(;;)
    {
        uint8 a = UART_1_GetChar();
        
        if(a == 'a')
        {
            sendData=TRUE;
            // printf() displays the string inside quotation
            
        }
        
    }
   
}

/* [] END OF FILE */
