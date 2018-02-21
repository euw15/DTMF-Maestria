;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.1 Update 1
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* Clock_1 */
Clock_1__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
Clock_1__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
Clock_1__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
Clock_1__CFG2_SRC_SEL_MASK EQU 0x07
Clock_1__INDEX EQU 0x00
Clock_1__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_1__PM_ACT_MSK EQU 0x01
Clock_1__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_1__PM_STBY_MSK EQU 0x01

/* Clock_2 */
Clock_2__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
Clock_2__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
Clock_2__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
Clock_2__CFG2_SRC_SEL_MASK EQU 0x07
Clock_2__INDEX EQU 0x01
Clock_2__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
Clock_2__PM_ACT_MSK EQU 0x02
Clock_2__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
Clock_2__PM_STBY_MSK EQU 0x02

/* Opamp_1_ABuf */
Opamp_1_ABuf__CR EQU CYREG_OPAMP2_CR
Opamp_1_ABuf__MX EQU CYREG_OPAMP2_MX
Opamp_1_ABuf__NPUMP_OPAMP_TR0 EQU CYREG_NPUMP_OPAMP_TR0
Opamp_1_ABuf__PM_ACT_CFG EQU CYREG_PM_ACT_CFG4
Opamp_1_ABuf__PM_ACT_MSK EQU 0x04
Opamp_1_ABuf__PM_STBY_CFG EQU CYREG_PM_STBY_CFG4
Opamp_1_ABuf__PM_STBY_MSK EQU 0x04
Opamp_1_ABuf__RSVD EQU CYREG_OPAMP2_RSVD
Opamp_1_ABuf__SW EQU CYREG_OPAMP2_SW
Opamp_1_ABuf__TR0 EQU CYREG_OPAMP2_TR0
Opamp_1_ABuf__TR1 EQU CYREG_OPAMP2_TR1

/* Pin_1 */
Pin_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE2
Pin_1__0__MASK EQU 0x04
Pin_1__0__PC EQU CYREG_PRT0_PC2
Pin_1__0__PORT EQU 0
Pin_1__0__SHIFT EQU 2
Pin_1__AG EQU CYREG_PRT0_AG
Pin_1__AMUX EQU CYREG_PRT0_AMUX
Pin_1__BIE EQU CYREG_PRT0_BIE
Pin_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_1__BYP EQU CYREG_PRT0_BYP
Pin_1__CTL EQU CYREG_PRT0_CTL
Pin_1__DM0 EQU CYREG_PRT0_DM0
Pin_1__DM1 EQU CYREG_PRT0_DM1
Pin_1__DM2 EQU CYREG_PRT0_DM2
Pin_1__DR EQU CYREG_PRT0_DR
Pin_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_1__MASK EQU 0x04
Pin_1__PORT EQU 0
Pin_1__PRT EQU CYREG_PRT0_PRT
Pin_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_1__PS EQU CYREG_PRT0_PS
Pin_1__SHIFT EQU 2
Pin_1__SLW EQU CYREG_PRT0_SLW

/* Pin_2 */
Pin_2__0__INTTYPE EQU CYREG_PICU12_INTTYPE3
Pin_2__0__MASK EQU 0x08
Pin_2__0__PC EQU CYREG_PRT12_PC3
Pin_2__0__PORT EQU 12
Pin_2__0__SHIFT EQU 3
Pin_2__AG EQU CYREG_PRT12_AG
Pin_2__BIE EQU CYREG_PRT12_BIE
Pin_2__BIT_MASK EQU CYREG_PRT12_BIT_MASK
Pin_2__BYP EQU CYREG_PRT12_BYP
Pin_2__DM0 EQU CYREG_PRT12_DM0
Pin_2__DM1 EQU CYREG_PRT12_DM1
Pin_2__DM2 EQU CYREG_PRT12_DM2
Pin_2__DR EQU CYREG_PRT12_DR
Pin_2__INP_DIS EQU CYREG_PRT12_INP_DIS
Pin_2__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
Pin_2__MASK EQU 0x08
Pin_2__PORT EQU 12
Pin_2__PRT EQU CYREG_PRT12_PRT
Pin_2__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
Pin_2__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
Pin_2__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
Pin_2__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
Pin_2__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
Pin_2__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
Pin_2__PS EQU CYREG_PRT12_PS
Pin_2__SHIFT EQU 3
Pin_2__SIO_CFG EQU CYREG_PRT12_SIO_CFG
Pin_2__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
Pin_2__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
Pin_2__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
Pin_2__SLW EQU CYREG_PRT12_SLW

/* Pin_3 */
Pin_3__0__INTTYPE EQU CYREG_PICU15_INTTYPE1
Pin_3__0__MASK EQU 0x02
Pin_3__0__PC EQU CYREG_IO_PC_PRT15_PC1
Pin_3__0__PORT EQU 15
Pin_3__0__SHIFT EQU 1
Pin_3__AG EQU CYREG_PRT15_AG
Pin_3__AMUX EQU CYREG_PRT15_AMUX
Pin_3__BIE EQU CYREG_PRT15_BIE
Pin_3__BIT_MASK EQU CYREG_PRT15_BIT_MASK
Pin_3__BYP EQU CYREG_PRT15_BYP
Pin_3__CTL EQU CYREG_PRT15_CTL
Pin_3__DM0 EQU CYREG_PRT15_DM0
Pin_3__DM1 EQU CYREG_PRT15_DM1
Pin_3__DM2 EQU CYREG_PRT15_DM2
Pin_3__DR EQU CYREG_PRT15_DR
Pin_3__INP_DIS EQU CYREG_PRT15_INP_DIS
Pin_3__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
Pin_3__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
Pin_3__LCD_EN EQU CYREG_PRT15_LCD_EN
Pin_3__MASK EQU 0x02
Pin_3__PORT EQU 15
Pin_3__PRT EQU CYREG_PRT15_PRT
Pin_3__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
Pin_3__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
Pin_3__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
Pin_3__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
Pin_3__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
Pin_3__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
Pin_3__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
Pin_3__PS EQU CYREG_PRT15_PS
Pin_3__SHIFT EQU 1
Pin_3__SLW EQU CYREG_PRT15_SLW

/* Pin_4 */
Pin_4__0__INTTYPE EQU CYREG_PICU15_INTTYPE4
Pin_4__0__MASK EQU 0x10
Pin_4__0__PC EQU CYREG_IO_PC_PRT15_PC4
Pin_4__0__PORT EQU 15
Pin_4__0__SHIFT EQU 4
Pin_4__AG EQU CYREG_PRT15_AG
Pin_4__AMUX EQU CYREG_PRT15_AMUX
Pin_4__BIE EQU CYREG_PRT15_BIE
Pin_4__BIT_MASK EQU CYREG_PRT15_BIT_MASK
Pin_4__BYP EQU CYREG_PRT15_BYP
Pin_4__CTL EQU CYREG_PRT15_CTL
Pin_4__DM0 EQU CYREG_PRT15_DM0
Pin_4__DM1 EQU CYREG_PRT15_DM1
Pin_4__DM2 EQU CYREG_PRT15_DM2
Pin_4__DR EQU CYREG_PRT15_DR
Pin_4__INP_DIS EQU CYREG_PRT15_INP_DIS
Pin_4__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU15_BASE
Pin_4__LCD_COM_SEG EQU CYREG_PRT15_LCD_COM_SEG
Pin_4__LCD_EN EQU CYREG_PRT15_LCD_EN
Pin_4__MASK EQU 0x10
Pin_4__PORT EQU 15
Pin_4__PRT EQU CYREG_PRT15_PRT
Pin_4__PRTDSI__CAPS_SEL EQU CYREG_PRT15_CAPS_SEL
Pin_4__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT15_DBL_SYNC_IN
Pin_4__PRTDSI__OE_SEL0 EQU CYREG_PRT15_OE_SEL0
Pin_4__PRTDSI__OE_SEL1 EQU CYREG_PRT15_OE_SEL1
Pin_4__PRTDSI__OUT_SEL0 EQU CYREG_PRT15_OUT_SEL0
Pin_4__PRTDSI__OUT_SEL1 EQU CYREG_PRT15_OUT_SEL1
Pin_4__PRTDSI__SYNC_OUT EQU CYREG_PRT15_SYNC_OUT
Pin_4__PS EQU CYREG_PRT15_PS
Pin_4__SHIFT EQU 4
Pin_4__SLW EQU CYREG_PRT15_SLW

/* Pin_5 */
Pin_5__0__INTTYPE EQU CYREG_PICU0_INTTYPE4
Pin_5__0__MASK EQU 0x10
Pin_5__0__PC EQU CYREG_PRT0_PC4
Pin_5__0__PORT EQU 0
Pin_5__0__SHIFT EQU 4
Pin_5__AG EQU CYREG_PRT0_AG
Pin_5__AMUX EQU CYREG_PRT0_AMUX
Pin_5__BIE EQU CYREG_PRT0_BIE
Pin_5__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_5__BYP EQU CYREG_PRT0_BYP
Pin_5__CTL EQU CYREG_PRT0_CTL
Pin_5__DM0 EQU CYREG_PRT0_DM0
Pin_5__DM1 EQU CYREG_PRT0_DM1
Pin_5__DM2 EQU CYREG_PRT0_DM2
Pin_5__DR EQU CYREG_PRT0_DR
Pin_5__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_5__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_5__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_5__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_5__MASK EQU 0x10
Pin_5__PORT EQU 0
Pin_5__PRT EQU CYREG_PRT0_PRT
Pin_5__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_5__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_5__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_5__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_5__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_5__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_5__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_5__PS EQU CYREG_PRT0_PS
Pin_5__SHIFT EQU 4
Pin_5__SLW EQU CYREG_PRT0_SLW

/* Pin_6 */
Pin_6__0__INTTYPE EQU CYREG_PICU0_INTTYPE5
Pin_6__0__MASK EQU 0x20
Pin_6__0__PC EQU CYREG_PRT0_PC5
Pin_6__0__PORT EQU 0
Pin_6__0__SHIFT EQU 5
Pin_6__AG EQU CYREG_PRT0_AG
Pin_6__AMUX EQU CYREG_PRT0_AMUX
Pin_6__BIE EQU CYREG_PRT0_BIE
Pin_6__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_6__BYP EQU CYREG_PRT0_BYP
Pin_6__CTL EQU CYREG_PRT0_CTL
Pin_6__DM0 EQU CYREG_PRT0_DM0
Pin_6__DM1 EQU CYREG_PRT0_DM1
Pin_6__DM2 EQU CYREG_PRT0_DM2
Pin_6__DR EQU CYREG_PRT0_DR
Pin_6__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_6__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_6__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_6__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_6__MASK EQU 0x20
Pin_6__PORT EQU 0
Pin_6__PRT EQU CYREG_PRT0_PRT
Pin_6__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_6__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_6__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_6__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_6__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_6__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_6__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_6__PS EQU CYREG_PRT0_PS
Pin_6__SHIFT EQU 5
Pin_6__SLW EQU CYREG_PRT0_SLW

/* Pin_7 */
Pin_7__0__INTTYPE EQU CYREG_PICU0_INTTYPE0
Pin_7__0__MASK EQU 0x01
Pin_7__0__PC EQU CYREG_PRT0_PC0
Pin_7__0__PORT EQU 0
Pin_7__0__SHIFT EQU 0
Pin_7__AG EQU CYREG_PRT0_AG
Pin_7__AMUX EQU CYREG_PRT0_AMUX
Pin_7__BIE EQU CYREG_PRT0_BIE
Pin_7__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Pin_7__BYP EQU CYREG_PRT0_BYP
Pin_7__CTL EQU CYREG_PRT0_CTL
Pin_7__DM0 EQU CYREG_PRT0_DM0
Pin_7__DM1 EQU CYREG_PRT0_DM1
Pin_7__DM2 EQU CYREG_PRT0_DM2
Pin_7__DR EQU CYREG_PRT0_DR
Pin_7__INP_DIS EQU CYREG_PRT0_INP_DIS
Pin_7__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Pin_7__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Pin_7__LCD_EN EQU CYREG_PRT0_LCD_EN
Pin_7__MASK EQU 0x01
Pin_7__PORT EQU 0
Pin_7__PRT EQU CYREG_PRT0_PRT
Pin_7__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Pin_7__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Pin_7__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Pin_7__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Pin_7__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Pin_7__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Pin_7__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Pin_7__PS EQU CYREG_PRT0_PS
Pin_7__SHIFT EQU 0
Pin_7__SLW EQU CYREG_PRT0_SLW

/* Rx_1 */
Rx_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE1
Rx_1__0__MASK EQU 0x02
Rx_1__0__PC EQU CYREG_PRT0_PC1
Rx_1__0__PORT EQU 0
Rx_1__0__SHIFT EQU 1
Rx_1__AG EQU CYREG_PRT0_AG
Rx_1__AMUX EQU CYREG_PRT0_AMUX
Rx_1__BIE EQU CYREG_PRT0_BIE
Rx_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Rx_1__BYP EQU CYREG_PRT0_BYP
Rx_1__CTL EQU CYREG_PRT0_CTL
Rx_1__DM0 EQU CYREG_PRT0_DM0
Rx_1__DM1 EQU CYREG_PRT0_DM1
Rx_1__DM2 EQU CYREG_PRT0_DM2
Rx_1__DR EQU CYREG_PRT0_DR
Rx_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Rx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Rx_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Rx_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Rx_1__MASK EQU 0x02
Rx_1__PORT EQU 0
Rx_1__PRT EQU CYREG_PRT0_PRT
Rx_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Rx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Rx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Rx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Rx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Rx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Rx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Rx_1__PS EQU CYREG_PRT0_PS
Rx_1__SHIFT EQU 1
Rx_1__SLW EQU CYREG_PRT0_SLW

/* Tx_1 */
Tx_1__0__INTTYPE EQU CYREG_PICU0_INTTYPE6
Tx_1__0__MASK EQU 0x40
Tx_1__0__PC EQU CYREG_PRT0_PC6
Tx_1__0__PORT EQU 0
Tx_1__0__SHIFT EQU 6
Tx_1__AG EQU CYREG_PRT0_AG
Tx_1__AMUX EQU CYREG_PRT0_AMUX
Tx_1__BIE EQU CYREG_PRT0_BIE
Tx_1__BIT_MASK EQU CYREG_PRT0_BIT_MASK
Tx_1__BYP EQU CYREG_PRT0_BYP
Tx_1__CTL EQU CYREG_PRT0_CTL
Tx_1__DM0 EQU CYREG_PRT0_DM0
Tx_1__DM1 EQU CYREG_PRT0_DM1
Tx_1__DM2 EQU CYREG_PRT0_DM2
Tx_1__DR EQU CYREG_PRT0_DR
Tx_1__INP_DIS EQU CYREG_PRT0_INP_DIS
Tx_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU0_BASE
Tx_1__LCD_COM_SEG EQU CYREG_PRT0_LCD_COM_SEG
Tx_1__LCD_EN EQU CYREG_PRT0_LCD_EN
Tx_1__MASK EQU 0x40
Tx_1__PORT EQU 0
Tx_1__PRT EQU CYREG_PRT0_PRT
Tx_1__PRTDSI__CAPS_SEL EQU CYREG_PRT0_CAPS_SEL
Tx_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT0_DBL_SYNC_IN
Tx_1__PRTDSI__OE_SEL0 EQU CYREG_PRT0_OE_SEL0
Tx_1__PRTDSI__OE_SEL1 EQU CYREG_PRT0_OE_SEL1
Tx_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT0_OUT_SEL0
Tx_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT0_OUT_SEL1
Tx_1__PRTDSI__SYNC_OUT EQU CYREG_PRT0_SYNC_OUT
Tx_1__PS EQU CYREG_PRT0_PS
Tx_1__SHIFT EQU 6
Tx_1__SLW EQU CYREG_PRT0_SLW

/* UART_1_BUART */
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB05_06_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB05_06_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB05_06_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB05_06_CTL
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB05_06_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB05_06_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB05_06_MSK
UART_1_BUART_sRX_RxBitCounter__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB05_06_MSK
UART_1_BUART_sRX_RxBitCounter__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_REG EQU CYREG_B0_UDB05_CTL
UART_1_BUART_sRX_RxBitCounter__CONTROL_ST_REG EQU CYREG_B0_UDB05_ST_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_REG EQU CYREG_B0_UDB05_CTL
UART_1_BUART_sRX_RxBitCounter__COUNT_ST_REG EQU CYREG_B0_UDB05_ST_CTL
UART_1_BUART_sRX_RxBitCounter__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter__PERIOD_REG EQU CYREG_B0_UDB05_MSK
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__16BIT_STATUS_REG EQU CYREG_B0_UDB05_06_ST
UART_1_BUART_sRX_RxBitCounter_ST__MASK_REG EQU CYREG_B0_UDB05_MSK
UART_1_BUART_sRX_RxBitCounter_ST__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CNT_REG EQU CYREG_B0_UDB05_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_CONTROL_REG EQU CYREG_B0_UDB05_ST_CTL
UART_1_BUART_sRX_RxBitCounter_ST__STATUS_REG EQU CYREG_B0_UDB05_ST
UART_1_BUART_sRX_RxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB02_03_A0
UART_1_BUART_sRX_RxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB02_03_A1
UART_1_BUART_sRX_RxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB02_03_D0
UART_1_BUART_sRX_RxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB02_03_D1
UART_1_BUART_sRX_RxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
UART_1_BUART_sRX_RxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB02_03_F0
UART_1_BUART_sRX_RxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB02_03_F1
UART_1_BUART_sRX_RxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB02_A0_A1
UART_1_BUART_sRX_RxShifter_u0__A0_REG EQU CYREG_B0_UDB02_A0
UART_1_BUART_sRX_RxShifter_u0__A1_REG EQU CYREG_B0_UDB02_A1
UART_1_BUART_sRX_RxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB02_D0_D1
UART_1_BUART_sRX_RxShifter_u0__D0_REG EQU CYREG_B0_UDB02_D0
UART_1_BUART_sRX_RxShifter_u0__D1_REG EQU CYREG_B0_UDB02_D1
UART_1_BUART_sRX_RxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
UART_1_BUART_sRX_RxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB02_F0_F1
UART_1_BUART_sRX_RxShifter_u0__F0_REG EQU CYREG_B0_UDB02_F0
UART_1_BUART_sRX_RxShifter_u0__F1_REG EQU CYREG_B0_UDB02_F1
UART_1_BUART_sRX_RxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_04_ACTL
UART_1_BUART_sRX_RxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB03_04_ST
UART_1_BUART_sRX_RxSts__3__MASK EQU 0x08
UART_1_BUART_sRX_RxSts__3__POS EQU 3
UART_1_BUART_sRX_RxSts__4__MASK EQU 0x10
UART_1_BUART_sRX_RxSts__4__POS EQU 4
UART_1_BUART_sRX_RxSts__5__MASK EQU 0x20
UART_1_BUART_sRX_RxSts__5__POS EQU 5
UART_1_BUART_sRX_RxSts__MASK EQU 0x38
UART_1_BUART_sRX_RxSts__MASK_REG EQU CYREG_B0_UDB03_MSK
UART_1_BUART_sRX_RxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB03_ACTL
UART_1_BUART_sRX_RxSts__STATUS_REG EQU CYREG_B0_UDB03_ST
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A0_REG EQU CYREG_B0_UDB00_01_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_A1_REG EQU CYREG_B0_UDB00_01_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D0_REG EQU CYREG_B0_UDB00_01_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_D1_REG EQU CYREG_B0_UDB00_01_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB00_01_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F0_REG EQU CYREG_B0_UDB00_01_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__16BIT_F1_REG EQU CYREG_B0_UDB00_01_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_A1_REG EQU CYREG_B0_UDB00_A0_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A0_REG EQU CYREG_B0_UDB00_A0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__A1_REG EQU CYREG_B0_UDB00_A1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_D1_REG EQU CYREG_B0_UDB00_D0_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D0_REG EQU CYREG_B0_UDB00_D0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__D1_REG EQU CYREG_B0_UDB00_D1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__DP_AUX_CTL_REG EQU CYREG_B0_UDB00_ACTL
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_F1_REG EQU CYREG_B0_UDB00_F0_F1
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F0_REG EQU CYREG_B0_UDB00_F0
UART_1_BUART_sTX_sCLOCK_TxBitClkGen__F1_REG EQU CYREG_B0_UDB00_F1
UART_1_BUART_sTX_TxShifter_u0__16BIT_A0_REG EQU CYREG_B0_UDB05_06_A0
UART_1_BUART_sTX_TxShifter_u0__16BIT_A1_REG EQU CYREG_B0_UDB05_06_A1
UART_1_BUART_sTX_TxShifter_u0__16BIT_D0_REG EQU CYREG_B0_UDB05_06_D0
UART_1_BUART_sTX_TxShifter_u0__16BIT_D1_REG EQU CYREG_B0_UDB05_06_D1
UART_1_BUART_sTX_TxShifter_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_06_ACTL
UART_1_BUART_sTX_TxShifter_u0__16BIT_F0_REG EQU CYREG_B0_UDB05_06_F0
UART_1_BUART_sTX_TxShifter_u0__16BIT_F1_REG EQU CYREG_B0_UDB05_06_F1
UART_1_BUART_sTX_TxShifter_u0__A0_A1_REG EQU CYREG_B0_UDB05_A0_A1
UART_1_BUART_sTX_TxShifter_u0__A0_REG EQU CYREG_B0_UDB05_A0
UART_1_BUART_sTX_TxShifter_u0__A1_REG EQU CYREG_B0_UDB05_A1
UART_1_BUART_sTX_TxShifter_u0__D0_D1_REG EQU CYREG_B0_UDB05_D0_D1
UART_1_BUART_sTX_TxShifter_u0__D0_REG EQU CYREG_B0_UDB05_D0
UART_1_BUART_sTX_TxShifter_u0__D1_REG EQU CYREG_B0_UDB05_D1
UART_1_BUART_sTX_TxShifter_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB05_ACTL
UART_1_BUART_sTX_TxShifter_u0__F0_F1_REG EQU CYREG_B0_UDB05_F0_F1
UART_1_BUART_sTX_TxShifter_u0__F0_REG EQU CYREG_B0_UDB05_F0
UART_1_BUART_sTX_TxShifter_u0__F1_REG EQU CYREG_B0_UDB05_F1
UART_1_BUART_sTX_TxShifter_u0__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sTX_TxShifter_u0__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB05_MSK_ACTL
UART_1_BUART_sTX_TxSts__0__MASK EQU 0x01
UART_1_BUART_sTX_TxSts__0__POS EQU 0
UART_1_BUART_sTX_TxSts__1__MASK EQU 0x02
UART_1_BUART_sTX_TxSts__1__POS EQU 1
UART_1_BUART_sTX_TxSts__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_03_ACTL
UART_1_BUART_sTX_TxSts__16BIT_STATUS_REG EQU CYREG_B0_UDB02_03_ST
UART_1_BUART_sTX_TxSts__2__MASK EQU 0x04
UART_1_BUART_sTX_TxSts__2__POS EQU 2
UART_1_BUART_sTX_TxSts__3__MASK EQU 0x08
UART_1_BUART_sTX_TxSts__3__POS EQU 3
UART_1_BUART_sTX_TxSts__MASK EQU 0x0F
UART_1_BUART_sTX_TxSts__MASK_REG EQU CYREG_B0_UDB02_MSK
UART_1_BUART_sTX_TxSts__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB02_ACTL
UART_1_BUART_sTX_TxSts__STATUS_REG EQU CYREG_B0_UDB02_ST

/* UART_1_IntClock */
UART_1_IntClock__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
UART_1_IntClock__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
UART_1_IntClock__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
UART_1_IntClock__CFG2_SRC_SEL_MASK EQU 0x07
UART_1_IntClock__INDEX EQU 0x02
UART_1_IntClock__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
UART_1_IntClock__PM_ACT_MSK EQU 0x04
UART_1_IntClock__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
UART_1_IntClock__PM_STBY_MSK EQU 0x04

/* Vout_1 */
Vout_1__0__INTTYPE EQU CYREG_PICU2_INTTYPE7
Vout_1__0__MASK EQU 0x80
Vout_1__0__PC EQU CYREG_PRT2_PC7
Vout_1__0__PORT EQU 2
Vout_1__0__SHIFT EQU 7
Vout_1__AG EQU CYREG_PRT2_AG
Vout_1__AMUX EQU CYREG_PRT2_AMUX
Vout_1__BIE EQU CYREG_PRT2_BIE
Vout_1__BIT_MASK EQU CYREG_PRT2_BIT_MASK
Vout_1__BYP EQU CYREG_PRT2_BYP
Vout_1__CTL EQU CYREG_PRT2_CTL
Vout_1__DM0 EQU CYREG_PRT2_DM0
Vout_1__DM1 EQU CYREG_PRT2_DM1
Vout_1__DM2 EQU CYREG_PRT2_DM2
Vout_1__DR EQU CYREG_PRT2_DR
Vout_1__INP_DIS EQU CYREG_PRT2_INP_DIS
Vout_1__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
Vout_1__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
Vout_1__LCD_EN EQU CYREG_PRT2_LCD_EN
Vout_1__MASK EQU 0x80
Vout_1__PORT EQU 2
Vout_1__PRT EQU CYREG_PRT2_PRT
Vout_1__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
Vout_1__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
Vout_1__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
Vout_1__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
Vout_1__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
Vout_1__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
Vout_1__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
Vout_1__PS EQU CYREG_PRT2_PS
Vout_1__SHIFT EQU 7
Vout_1__SLW EQU CYREG_PRT2_SLW

/* WaveDAC8_1_VDAC8 */
WaveDAC8_1_VDAC8_viDAC8__CR0 EQU CYREG_DAC3_CR0
WaveDAC8_1_VDAC8_viDAC8__CR1 EQU CYREG_DAC3_CR1
WaveDAC8_1_VDAC8_viDAC8__D EQU CYREG_DAC3_D
WaveDAC8_1_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
WaveDAC8_1_VDAC8_viDAC8__PM_ACT_MSK EQU 0x08
WaveDAC8_1_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
WaveDAC8_1_VDAC8_viDAC8__PM_STBY_MSK EQU 0x08
WaveDAC8_1_VDAC8_viDAC8__STROBE EQU CYREG_DAC3_STROBE
WaveDAC8_1_VDAC8_viDAC8__SW0 EQU CYREG_DAC3_SW0
WaveDAC8_1_VDAC8_viDAC8__SW2 EQU CYREG_DAC3_SW2
WaveDAC8_1_VDAC8_viDAC8__SW3 EQU CYREG_DAC3_SW3
WaveDAC8_1_VDAC8_viDAC8__SW4 EQU CYREG_DAC3_SW4
WaveDAC8_1_VDAC8_viDAC8__TR EQU CYREG_DAC3_TR
WaveDAC8_1_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M1
WaveDAC8_1_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M2
WaveDAC8_1_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M3
WaveDAC8_1_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M4
WaveDAC8_1_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M5
WaveDAC8_1_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M6
WaveDAC8_1_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M7
WaveDAC8_1_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC3_M8
WaveDAC8_1_VDAC8_viDAC8__TST EQU CYREG_DAC3_TST

/* WaveDAC8_1_Wave1_DMA */
WaveDAC8_1_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_1_Wave1_DMA__DRQ_NUMBER EQU 0
WaveDAC8_1_Wave1_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_1_Wave1_DMA__PRIORITY EQU 2
WaveDAC8_1_Wave1_DMA__TERMIN_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMIN_SEL EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT0_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT1_EN EQU 0
WaveDAC8_1_Wave1_DMA__TERMOUT1_SEL EQU 0

/* WaveDAC8_1_Wave2_DMA */
WaveDAC8_1_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_1_Wave2_DMA__DRQ_NUMBER EQU 1
WaveDAC8_1_Wave2_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_1_Wave2_DMA__PRIORITY EQU 2
WaveDAC8_1_Wave2_DMA__TERMIN_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMIN_SEL EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT0_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT1_EN EQU 0
WaveDAC8_1_Wave2_DMA__TERMOUT1_SEL EQU 0

/* WaveDAC8_2_VDAC8 */
WaveDAC8_2_VDAC8_viDAC8__CR0 EQU CYREG_DAC0_CR0
WaveDAC8_2_VDAC8_viDAC8__CR1 EQU CYREG_DAC0_CR1
WaveDAC8_2_VDAC8_viDAC8__D EQU CYREG_DAC0_D
WaveDAC8_2_VDAC8_viDAC8__PM_ACT_CFG EQU CYREG_PM_ACT_CFG8
WaveDAC8_2_VDAC8_viDAC8__PM_ACT_MSK EQU 0x01
WaveDAC8_2_VDAC8_viDAC8__PM_STBY_CFG EQU CYREG_PM_STBY_CFG8
WaveDAC8_2_VDAC8_viDAC8__PM_STBY_MSK EQU 0x01
WaveDAC8_2_VDAC8_viDAC8__STROBE EQU CYREG_DAC0_STROBE
WaveDAC8_2_VDAC8_viDAC8__SW0 EQU CYREG_DAC0_SW0
WaveDAC8_2_VDAC8_viDAC8__SW2 EQU CYREG_DAC0_SW2
WaveDAC8_2_VDAC8_viDAC8__SW3 EQU CYREG_DAC0_SW3
WaveDAC8_2_VDAC8_viDAC8__SW4 EQU CYREG_DAC0_SW4
WaveDAC8_2_VDAC8_viDAC8__TR EQU CYREG_DAC0_TR
WaveDAC8_2_VDAC8_viDAC8__TRIM__M1 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M1
WaveDAC8_2_VDAC8_viDAC8__TRIM__M2 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M2
WaveDAC8_2_VDAC8_viDAC8__TRIM__M3 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M3
WaveDAC8_2_VDAC8_viDAC8__TRIM__M4 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M4
WaveDAC8_2_VDAC8_viDAC8__TRIM__M5 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M5
WaveDAC8_2_VDAC8_viDAC8__TRIM__M6 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M6
WaveDAC8_2_VDAC8_viDAC8__TRIM__M7 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M7
WaveDAC8_2_VDAC8_viDAC8__TRIM__M8 EQU CYREG_FLSHID_CUST_TABLES_DAC0_M8
WaveDAC8_2_VDAC8_viDAC8__TST EQU CYREG_DAC0_TST

/* WaveDAC8_2_Wave1_DMA */
WaveDAC8_2_Wave1_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_2_Wave1_DMA__DRQ_NUMBER EQU 2
WaveDAC8_2_Wave1_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_2_Wave1_DMA__PRIORITY EQU 2
WaveDAC8_2_Wave1_DMA__TERMIN_EN EQU 0
WaveDAC8_2_Wave1_DMA__TERMIN_SEL EQU 0
WaveDAC8_2_Wave1_DMA__TERMOUT0_EN EQU 0
WaveDAC8_2_Wave1_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_2_Wave1_DMA__TERMOUT1_EN EQU 0
WaveDAC8_2_Wave1_DMA__TERMOUT1_SEL EQU 0

/* WaveDAC8_2_Wave2_DMA */
WaveDAC8_2_Wave2_DMA__DRQ_CTL EQU CYREG_IDMUX_DRQ_CTL0
WaveDAC8_2_Wave2_DMA__DRQ_NUMBER EQU 3
WaveDAC8_2_Wave2_DMA__NUMBEROF_TDS EQU 0
WaveDAC8_2_Wave2_DMA__PRIORITY EQU 2
WaveDAC8_2_Wave2_DMA__TERMIN_EN EQU 0
WaveDAC8_2_Wave2_DMA__TERMIN_SEL EQU 0
WaveDAC8_2_Wave2_DMA__TERMOUT0_EN EQU 0
WaveDAC8_2_Wave2_DMA__TERMOUT0_SEL EQU 0
WaveDAC8_2_Wave2_DMA__TERMOUT1_EN EQU 0
WaveDAC8_2_Wave2_DMA__TERMOUT1_SEL EQU 0

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 16
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 16
CYDEV_CHIP_MEMBER_4D EQU 12
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 17
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 15
CYDEV_CHIP_MEMBER_4I EQU 21
CYDEV_CHIP_MEMBER_4J EQU 13
CYDEV_CHIP_MEMBER_4K EQU 14
CYDEV_CHIP_MEMBER_4L EQU 20
CYDEV_CHIP_MEMBER_4M EQU 19
CYDEV_CHIP_MEMBER_4N EQU 9
CYDEV_CHIP_MEMBER_4O EQU 7
CYDEV_CHIP_MEMBER_4P EQU 18
CYDEV_CHIP_MEMBER_4Q EQU 11
CYDEV_CHIP_MEMBER_4R EQU 8
CYDEV_CHIP_MEMBER_4S EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 22
CYDEV_CHIP_MEMBER_FM3 EQU 26
CYDEV_CHIP_MEMBER_FM4 EQU 27
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 23
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 24
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 25
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 0
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00000000
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x0000000F
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */