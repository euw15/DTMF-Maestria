/*******************************************************************************
* File Name: SignalSelector.h  
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

#if !defined(CY_PINS_SignalSelector_H) /* Pins SignalSelector_H */
#define CY_PINS_SignalSelector_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "SignalSelector_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 SignalSelector__PORT == 15 && ((SignalSelector__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    SignalSelector_Write(uint8 value);
void    SignalSelector_SetDriveMode(uint8 mode);
uint8   SignalSelector_ReadDataReg(void);
uint8   SignalSelector_Read(void);
void    SignalSelector_SetInterruptMode(uint16 position, uint16 mode);
uint8   SignalSelector_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the SignalSelector_SetDriveMode() function.
     *  @{
     */
        #define SignalSelector_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define SignalSelector_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define SignalSelector_DM_RES_UP          PIN_DM_RES_UP
        #define SignalSelector_DM_RES_DWN         PIN_DM_RES_DWN
        #define SignalSelector_DM_OD_LO           PIN_DM_OD_LO
        #define SignalSelector_DM_OD_HI           PIN_DM_OD_HI
        #define SignalSelector_DM_STRONG          PIN_DM_STRONG
        #define SignalSelector_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define SignalSelector_MASK               SignalSelector__MASK
#define SignalSelector_SHIFT              SignalSelector__SHIFT
#define SignalSelector_WIDTH              1u

/* Interrupt constants */
#if defined(SignalSelector__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in SignalSelector_SetInterruptMode() function.
     *  @{
     */
        #define SignalSelector_INTR_NONE      (uint16)(0x0000u)
        #define SignalSelector_INTR_RISING    (uint16)(0x0001u)
        #define SignalSelector_INTR_FALLING   (uint16)(0x0002u)
        #define SignalSelector_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define SignalSelector_INTR_MASK      (0x01u) 
#endif /* (SignalSelector__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define SignalSelector_PS                     (* (reg8 *) SignalSelector__PS)
/* Data Register */
#define SignalSelector_DR                     (* (reg8 *) SignalSelector__DR)
/* Port Number */
#define SignalSelector_PRT_NUM                (* (reg8 *) SignalSelector__PRT) 
/* Connect to Analog Globals */                                                  
#define SignalSelector_AG                     (* (reg8 *) SignalSelector__AG)                       
/* Analog MUX bux enable */
#define SignalSelector_AMUX                   (* (reg8 *) SignalSelector__AMUX) 
/* Bidirectional Enable */                                                        
#define SignalSelector_BIE                    (* (reg8 *) SignalSelector__BIE)
/* Bit-mask for Aliased Register Access */
#define SignalSelector_BIT_MASK               (* (reg8 *) SignalSelector__BIT_MASK)
/* Bypass Enable */
#define SignalSelector_BYP                    (* (reg8 *) SignalSelector__BYP)
/* Port wide control signals */                                                   
#define SignalSelector_CTL                    (* (reg8 *) SignalSelector__CTL)
/* Drive Modes */
#define SignalSelector_DM0                    (* (reg8 *) SignalSelector__DM0) 
#define SignalSelector_DM1                    (* (reg8 *) SignalSelector__DM1)
#define SignalSelector_DM2                    (* (reg8 *) SignalSelector__DM2) 
/* Input Buffer Disable Override */
#define SignalSelector_INP_DIS                (* (reg8 *) SignalSelector__INP_DIS)
/* LCD Common or Segment Drive */
#define SignalSelector_LCD_COM_SEG            (* (reg8 *) SignalSelector__LCD_COM_SEG)
/* Enable Segment LCD */
#define SignalSelector_LCD_EN                 (* (reg8 *) SignalSelector__LCD_EN)
/* Slew Rate Control */
#define SignalSelector_SLW                    (* (reg8 *) SignalSelector__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define SignalSelector_PRTDSI__CAPS_SEL       (* (reg8 *) SignalSelector__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define SignalSelector_PRTDSI__DBL_SYNC_IN    (* (reg8 *) SignalSelector__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define SignalSelector_PRTDSI__OE_SEL0        (* (reg8 *) SignalSelector__PRTDSI__OE_SEL0) 
#define SignalSelector_PRTDSI__OE_SEL1        (* (reg8 *) SignalSelector__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define SignalSelector_PRTDSI__OUT_SEL0       (* (reg8 *) SignalSelector__PRTDSI__OUT_SEL0) 
#define SignalSelector_PRTDSI__OUT_SEL1       (* (reg8 *) SignalSelector__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define SignalSelector_PRTDSI__SYNC_OUT       (* (reg8 *) SignalSelector__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(SignalSelector__SIO_CFG)
    #define SignalSelector_SIO_HYST_EN        (* (reg8 *) SignalSelector__SIO_HYST_EN)
    #define SignalSelector_SIO_REG_HIFREQ     (* (reg8 *) SignalSelector__SIO_REG_HIFREQ)
    #define SignalSelector_SIO_CFG            (* (reg8 *) SignalSelector__SIO_CFG)
    #define SignalSelector_SIO_DIFF           (* (reg8 *) SignalSelector__SIO_DIFF)
#endif /* (SignalSelector__SIO_CFG) */

/* Interrupt Registers */
#if defined(SignalSelector__INTSTAT)
    #define SignalSelector_INTSTAT            (* (reg8 *) SignalSelector__INTSTAT)
    #define SignalSelector_SNAP               (* (reg8 *) SignalSelector__SNAP)
    
	#define SignalSelector_0_INTTYPE_REG 		(* (reg8 *) SignalSelector__0__INTTYPE)
#endif /* (SignalSelector__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_SignalSelector_H */


/* [] END OF FILE */
