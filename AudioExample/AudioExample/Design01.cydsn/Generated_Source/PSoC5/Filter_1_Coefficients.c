#include "Filter_1.h"
#include "Filter_1_PVT.h"


/*******************************************************************************
* ChannelA filter coefficients.
* Filter Type is FIR
*******************************************************************************/

/* Renamed array for backward compatibility.
*  Should not be used in new designs.
*/
#define ChannelAFirCoefficients Filter_1_ChannelAFirCoefficients

/* Number of FIR filter taps are: 16 */

const uint8 CYCODE Filter_1_ChannelAFirCoefficients[Filter_1_FIR_A_SIZE] = 
{
 0x06u, 0x6Fu, 0x04u, 0x00u, /* Tap(0), 0.0346381664276123 */

 0x27u, 0x09u, 0x08u, 0x00u, /* Tap(1), 0.0627793073654175 */

 0x63u, 0xB5u, 0x0Eu, 0x00u, /* Tap(2), 0.114910483360291 */

 0x00u, 0x75u, 0x17u, 0x00u, /* Tap(3), 0.183258056640625 */

 0x8Au, 0xF4u, 0x20u, 0x00u, /* Tap(4), 0.257462739944458 */

 0x72u, 0xC0u, 0x29u, 0x00u, /* Tap(5), 0.326185464859009 */

 0xFFu, 0x7Eu, 0x30u, 0x00u, /* Tap(6), 0.378875613212585 */

 0x61u, 0x26u, 0x34u, 0x00u, /* Tap(7), 0.407421231269836 */

 0x61u, 0x26u, 0x34u, 0x00u, /* Tap(8), 0.407421231269836 */

 0xFFu, 0x7Eu, 0x30u, 0x00u, /* Tap(9), 0.378875613212585 */

 0x72u, 0xC0u, 0x29u, 0x00u, /* Tap(10), 0.326185464859009 */

 0x8Au, 0xF4u, 0x20u, 0x00u, /* Tap(11), 0.257462739944458 */

 0x00u, 0x75u, 0x17u, 0x00u, /* Tap(12), 0.183258056640625 */

 0x63u, 0xB5u, 0x0Eu, 0x00u, /* Tap(13), 0.114910483360291 */

 0x27u, 0x09u, 0x08u, 0x00u, /* Tap(14), 0.0627793073654175 */

 0x06u, 0x6Fu, 0x04u, 0x00u, /* Tap(15), 0.0346381664276123 */
};

