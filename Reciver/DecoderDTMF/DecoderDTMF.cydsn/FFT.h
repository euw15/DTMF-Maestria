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

/* [] END OF FILE */
#include <math.h>

#define PI 3.1415926535897932384626434

typedef struct complex_t {
    double re;
    double im;
} complex;

complex conv_from_polar(double r, double radians);
complex add(complex left, complex right);
complex multiply(complex left, complex right);

complex* FFT_CooleyTukey(complex* x, int N, int N1, int N2);
complex* DFT_naive(complex* x, int N);