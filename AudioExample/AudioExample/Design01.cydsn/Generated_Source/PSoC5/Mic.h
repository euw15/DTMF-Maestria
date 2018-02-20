/*******************************************************************************
* File Name: Mic.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Mic_H) /* Pins Mic_H */
#define CY_PINS_Mic_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Mic_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Mic__PORT == 15 && ((Mic__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Mic_Write(uint8 value);
void    Mic_SetDriveMode(uint8 mode);
uint8   Mic_ReadDataReg(void);
uint8   Mic_Read(void);
void    Mic_SetInterruptMode(uint16 position, uint16 mode);
uint8   Mic_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Mic_SetDriveMode() function.
     *  @{
     */
        #define Mic_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Mic_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Mic_DM_RES_UP          PIN_DM_RES_UP
        #define Mic_DM_RES_DWN         PIN_DM_RES_DWN
        #define Mic_DM_OD_LO           PIN_DM_OD_LO
        #define Mic_DM_OD_HI           PIN_DM_OD_HI
        #define Mic_DM_STRONG          PIN_DM_STRONG
        #define Mic_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Mic_MASK               Mic__MASK
#define Mic_SHIFT              Mic__SHIFT
#define Mic_WIDTH              1u

/* Interrupt constants */
#if defined(Mic__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Mic_SetInterruptMode() function.
     *  @{
     */
        #define Mic_INTR_NONE      (uint16)(0x0000u)
        #define Mic_INTR_RISING    (uint16)(0x0001u)
        #define Mic_INTR_FALLING   (uint16)(0x0002u)
        #define Mic_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Mic_INTR_MASK      (0x01u) 
#endif /* (Mic__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Mic_PS                     (* (reg8 *) Mic__PS)
/* Data Register */
#define Mic_DR                     (* (reg8 *) Mic__DR)
/* Port Number */
#define Mic_PRT_NUM                (* (reg8 *) Mic__PRT) 
/* Connect to Analog Globals */                                                  
#define Mic_AG                     (* (reg8 *) Mic__AG)                       
/* Analog MUX bux enable */
#define Mic_AMUX                   (* (reg8 *) Mic__AMUX) 
/* Bidirectional Enable */                                                        
#define Mic_BIE                    (* (reg8 *) Mic__BIE)
/* Bit-mask for Aliased Register Access */
#define Mic_BIT_MASK               (* (reg8 *) Mic__BIT_MASK)
/* Bypass Enable */
#define Mic_BYP                    (* (reg8 *) Mic__BYP)
/* Port wide control signals */                                                   
#define Mic_CTL                    (* (reg8 *) Mic__CTL)
/* Drive Modes */
#define Mic_DM0                    (* (reg8 *) Mic__DM0) 
#define Mic_DM1                    (* (reg8 *) Mic__DM1)
#define Mic_DM2                    (* (reg8 *) Mic__DM2) 
/* Input Buffer Disable Override */
#define Mic_INP_DIS                (* (reg8 *) Mic__INP_DIS)
/* LCD Common or Segment Drive */
#define Mic_LCD_COM_SEG            (* (reg8 *) Mic__LCD_COM_SEG)
/* Enable Segment LCD */
#define Mic_LCD_EN                 (* (reg8 *) Mic__LCD_EN)
/* Slew Rate Control */
#define Mic_SLW                    (* (reg8 *) Mic__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Mic_PRTDSI__CAPS_SEL       (* (reg8 *) Mic__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Mic_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Mic__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Mic_PRTDSI__OE_SEL0        (* (reg8 *) Mic__PRTDSI__OE_SEL0) 
#define Mic_PRTDSI__OE_SEL1        (* (reg8 *) Mic__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Mic_PRTDSI__OUT_SEL0       (* (reg8 *) Mic__PRTDSI__OUT_SEL0) 
#define Mic_PRTDSI__OUT_SEL1       (* (reg8 *) Mic__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Mic_PRTDSI__SYNC_OUT       (* (reg8 *) Mic__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Mic__SIO_CFG)
    #define Mic_SIO_HYST_EN        (* (reg8 *) Mic__SIO_HYST_EN)
    #define Mic_SIO_REG_HIFREQ     (* (reg8 *) Mic__SIO_REG_HIFREQ)
    #define Mic_SIO_CFG            (* (reg8 *) Mic__SIO_CFG)
    #define Mic_SIO_DIFF           (* (reg8 *) Mic__SIO_DIFF)
#endif /* (Mic__SIO_CFG) */

/* Interrupt Registers */
#if defined(Mic__INTSTAT)
    #define Mic_INTSTAT            (* (reg8 *) Mic__INTSTAT)
    #define Mic_SNAP               (* (reg8 *) Mic__SNAP)
    
	#define Mic_0_INTTYPE_REG 		(* (reg8 *) Mic__0__INTTYPE)
#endif /* (Mic__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Mic_H */


/* [] END OF FILE */
