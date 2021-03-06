//
// Register Declarations for Microchip 16HV616 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V4850
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
//
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
//
#ifndef P16HV616_H
#define P16HV616_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTC_ADDR	0x0007
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define TMR2_ADDR	0x0011
#define T2CON_ADDR	0x0012
#define CCPR1L_ADDR	0x0013
#define CCPR1H_ADDR	0x0014
#define CCP1CON_ADDR	0x0015
#define PWM1CON_ADDR	0x0016
#define ECCPAS_ADDR	0x0017
#define VRCON_ADDR	0x0019
#define CM1CON0_ADDR	0x001A
#define CM2CON0_ADDR	0x001B
#define CM2CON1_ADDR	0x001C
#define ADRESH_ADDR	0x001E
#define ADCON0_ADDR	0x001F
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISC_ADDR	0x0087
#define PIE1_ADDR	0x008C
#define PCON_ADDR	0x008E
#define OSCTUNE_ADDR	0x0090
#define ANSEL_ADDR	0x0091
#define PR2_ADDR	0x0092
#define WPU_ADDR	0x0095
#define WPUA_ADDR	0x0095
#define IOC_ADDR	0x0096
#define IOCA_ADDR	0x0096
#define SRCON_ADDR	0x0099
#define SRCON0_ADDR	0x0099
#define SRCON1_ADDR	0x009A
#define ADRESL_ADDR	0x009E
#define ADCON1_ADDR	0x009F

//
// Memory organization.
//



//         LIST
// P16HV616.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// Based on P16F616.INC
// This header file defines configurations, registers, and other useful bits of
// information for the PIC16HV616 microcontroller.  These names are taken to match
// the data sheets as closely as possible.

// Note that the processor must be selected before this file is
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16HV616
//       2. LIST directive in the source file
//               LIST   P=PIC16HV616
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================
//1.00   09/12/05 Original
//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16HV616
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern __sfr  __at (INDF_ADDR)                    INDF;
extern __sfr  __at (TMR0_ADDR)                    TMR0;
extern __sfr  __at (PCL_ADDR)                     PCL;
extern __sfr  __at (STATUS_ADDR)                  STATUS;
extern __sfr  __at (FSR_ADDR)                     FSR;
extern __sfr  __at (PORTA_ADDR)                   PORTA;

extern __sfr  __at (PORTC_ADDR)                   PORTC;

extern __sfr  __at (PCLATH_ADDR)                  PCLATH;
extern __sfr  __at (INTCON_ADDR)                  INTCON;
extern __sfr  __at (PIR1_ADDR)                    PIR1;

extern __sfr  __at (TMR1L_ADDR)                   TMR1L;
extern __sfr  __at (TMR1H_ADDR)                   TMR1H;
extern __sfr  __at (T1CON_ADDR)                   T1CON;
extern __sfr  __at (TMR2_ADDR)                    TMR2;
extern __sfr  __at (T2CON_ADDR)                   T2CON;
extern __sfr  __at (CCPR1L_ADDR)                  CCPR1L;
extern __sfr  __at (CCPR1H_ADDR)                  CCPR1H;
extern __sfr  __at (CCP1CON_ADDR)                 CCP1CON;
extern __sfr  __at (PWM1CON_ADDR)                 PWM1CON;
extern __sfr  __at (ECCPAS_ADDR)                  ECCPAS;

extern __sfr  __at (VRCON_ADDR)                   VRCON;
extern __sfr  __at (CM1CON0_ADDR)                 CM1CON0;
extern __sfr  __at (CM2CON0_ADDR)                 CM2CON0;
extern __sfr  __at (CM2CON1_ADDR)                 CM2CON1;

extern __sfr  __at (ADRESH_ADDR)                  ADRESH;
extern __sfr  __at (ADCON0_ADDR)                  ADCON0;


extern __sfr  __at (OPTION_REG_ADDR)              OPTION_REG;

extern __sfr  __at (TRISA_ADDR)                   TRISA;
extern __sfr  __at (TRISC_ADDR)                   TRISC;

extern __sfr  __at (PIE1_ADDR)                    PIE1;

extern __sfr  __at (PCON_ADDR)                    PCON;

extern __sfr  __at (OSCTUNE_ADDR)                 OSCTUNE;
extern __sfr  __at (ANSEL_ADDR)                   ANSEL;
extern __sfr  __at (PR2_ADDR)                     PR2;

extern __sfr  __at (WPU_ADDR)                     WPU;
extern __sfr  __at (WPUA_ADDR)                    WPUA;
extern __sfr  __at (IOC_ADDR)                     IOC;
extern __sfr  __at (IOCA_ADDR)                    IOCA;

extern __sfr  __at (SRCON_ADDR)                   SRCON;
extern __sfr  __at (SRCON0_ADDR)                  SRCON0;
extern __sfr  __at (SRCON1_ADDR)                  SRCON1;

extern __sfr  __at (ADRESL_ADDR)                  ADRESL;
extern __sfr  __at (ADCON1_ADDR)                  ADCON1;


//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------




//----- T1CON Bits ---------------------------------------------------------


//----- T2CON Bits ---------------------------------------------------------


//----- CCP1CON Bits -------------------------------------------------------


//----- PWM1CON Bits -------------------------------------------------------


//----- ECCPAS Bits --------------------------------------------------------


//----- VRCON Bits -------------------------------------------------------


//----- CM1CON0 Bits -------------------------------------------------------



//----- CM2CON0 Bits -------------------------------------------------------



//----- CM2CON1 Bits -------------------------------------------------------



//----- ADCON0 Bits --------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- PIE1 Bits ----------------------------------------------------------




//----- PCON Bits ----------------------------------------------------------


//----- OSCTUNE Bits -------------------------------------------------------


//----- ANSEL --------------------------------------------------------------


//----- WPU --------------------------------------------------------------



//----- WPUA --------------------------------------------------------------



//----- IOC --------------------------------------------------------------


//----- IOCA --------------------------------------------------------------


//----- SRCON0 ------------------------------------------------------------



//----- SRCON1 ------------------------------------------------------------


//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'FF'
//         __BADRAM H'06', H'08'-H'09', H'0D', H'18', H'1D'
//         __BADRAM H'86', H'88'-H'89', H'8D', H'8F', H'93'-H'94', H'97'-H'98', H'9B'-H'9D', H'C0'-H'EF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================


#define _BOR_ON              0x3FFF
#define _BOR_NSLEEP          0x3EFF
#define _BOR_OFF             0x3CFF

#define _IOSCFS_8MHZ         0x3FFF
#define _IOSCFS_4MHZ         0x3F7F

#define _CP_ON               0x3FBF
#define _CP_OFF              0x3FFF

#define _MCLRE_ON            0x3FFF
#define _MCLRE_OFF           0x3FDF

#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FEF

#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FF7

#define _LP_OSC              0x3FF8
#define _XT_OSC              0x3FF9
#define _HS_OSC              0x3FFA
#define _EC_OSC              0x3FFB

#define _INTRC_OSC_NOCLKOUT  0x3FFC
#define _INTRC_OSC_CLKOUT    0x3FFD
#define _INTOSCIO            0x3FFC
#define _INTOSC              0x3FFD

#define _EXTRC_OSC_NOCLKOUT  0x3FFE
#define _EXTRC_OSC_CLKOUT    0x3FFF
#define _EXTRCIO             0x3FFE
#define _EXTRC               0x3FFF

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char GO:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char CHS2:1;
    unsigned char CHS3:1;
    unsigned char VCFG:1;
    unsigned char ADFM:1;
  };
  struct {
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0_bits_t;
extern volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;

#ifndef NO_BIT_DEFINES
#define ADON                 ADCON0_bits.ADON
#define GO                   ADCON0_bits.GO
#define NOT_DONE             ADCON0_bits.NOT_DONE
#define GO_DONE              ADCON0_bits.GO_DONE
#define CHS0                 ADCON0_bits.CHS0
#define CHS1                 ADCON0_bits.CHS1
#define CHS2                 ADCON0_bits.CHS2
#define CHS3                 ADCON0_bits.CHS3
#define VCFG                 ADCON0_bits.VCFG
#define ADFM                 ADCON0_bits.ADFM
#endif /* NO_BIT_DEFINES */

// ----- ANSEL bits --------------------
typedef union {
  struct {
    unsigned char ANS0:1;
    unsigned char ANS1:1;
    unsigned char ANS2:1;
    unsigned char ANS3:1;
    unsigned char ANS4:1;
    unsigned char ANS5:1;
    unsigned char ANS6:1;
    unsigned char ANS7:1;
  };
} __ANSEL_bits_t;
extern volatile __ANSEL_bits_t __at(ANSEL_ADDR) ANSEL_bits;

#ifndef NO_BIT_DEFINES
#define ANS0                 ANSEL_bits.ANS0
#define ANS1                 ANSEL_bits.ANS1
#define ANS2                 ANSEL_bits.ANS2
#define ANS3                 ANSEL_bits.ANS3
#define ANS4                 ANSEL_bits.ANS4
#define ANS5                 ANSEL_bits.ANS5
#define ANS6                 ANSEL_bits.ANS6
#define ANS7                 ANSEL_bits.ANS7
#endif /* NO_BIT_DEFINES */

// ----- CCP1CON bits --------------------
typedef union {
  struct {
    unsigned char CCP1M0:1;
    unsigned char CCP1M1:1;
    unsigned char CCP1M2:1;
    unsigned char CCP1M3:1;
    unsigned char DC1B0:1;
    unsigned char DC1B1:1;
    unsigned char P1M0:1;
    unsigned char P1M1:1;
  };
} __CCP1CON_bits_t;
extern volatile __CCP1CON_bits_t __at(CCP1CON_ADDR) CCP1CON_bits;

#ifndef NO_BIT_DEFINES
#define CCP1M0               CCP1CON_bits.CCP1M0
#define CCP1M1               CCP1CON_bits.CCP1M1
#define CCP1M2               CCP1CON_bits.CCP1M2
#define CCP1M3               CCP1CON_bits.CCP1M3
#define DC1B0                CCP1CON_bits.DC1B0
#define DC1B1                CCP1CON_bits.DC1B1
#define P1M0                 CCP1CON_bits.P1M0
#define P1M1                 CCP1CON_bits.P1M1
#endif /* NO_BIT_DEFINES */

// ----- CM1CON0 bits --------------------
typedef union {
  struct {
    unsigned char C1CH0:1;
    unsigned char C1CH1:1;
    unsigned char C1R:1;
    unsigned char :1;
    unsigned char C1POL:1;
    unsigned char C1OE:1;
    unsigned char C1OUT:1;
    unsigned char C1ON:1;
  };
} __CM1CON0_bits_t;
extern volatile __CM1CON0_bits_t __at(CM1CON0_ADDR) CM1CON0_bits;

#ifndef NO_BIT_DEFINES
#define C1CH0                CM1CON0_bits.C1CH0
#define C1CH1                CM1CON0_bits.C1CH1
#define C1R                  CM1CON0_bits.C1R
#define C1POL                CM1CON0_bits.C1POL
#define C1OE                 CM1CON0_bits.C1OE
#define C1OUT                CM1CON0_bits.C1OUT
#define C1ON                 CM1CON0_bits.C1ON
#endif /* NO_BIT_DEFINES */

// ----- CM2CON0 bits --------------------
typedef union {
  struct {
    unsigned char C2CH0:1;
    unsigned char C2CH1:1;
    unsigned char C2R:1;
    unsigned char :1;
    unsigned char C2POL:1;
    unsigned char C2OE:1;
    unsigned char C2OUT:1;
    unsigned char C2ON:1;
  };
} __CM2CON0_bits_t;
extern volatile __CM2CON0_bits_t __at(CM2CON0_ADDR) CM2CON0_bits;

#ifndef NO_BIT_DEFINES
#define C2CH0                CM2CON0_bits.C2CH0
#define C2CH1                CM2CON0_bits.C2CH1
#define C2R                  CM2CON0_bits.C2R
#define C2POL                CM2CON0_bits.C2POL
#define C2OE                 CM2CON0_bits.C2OE
#define C2OUT                CM2CON0_bits.C2OUT
#define C2ON                 CM2CON0_bits.C2ON
#endif /* NO_BIT_DEFINES */

// ----- CM2CON1 bits --------------------
typedef union {
  struct {
    unsigned char C2SYNC:1;
    unsigned char T1GSS:1;
    unsigned char C2HYS:1;
    unsigned char C1HYS:1;
    unsigned char T1ACS:1;
    unsigned char :1;
    unsigned char MC2OUT:1;
    unsigned char MC1OUT:1;
  };
} __CM2CON1_bits_t;
extern volatile __CM2CON1_bits_t __at(CM2CON1_ADDR) CM2CON1_bits;

#ifndef NO_BIT_DEFINES
#define C2SYNC               CM2CON1_bits.C2SYNC
#define T1GSS                CM2CON1_bits.T1GSS
#define C2HYS                CM2CON1_bits.C2HYS
#define C1HYS                CM2CON1_bits.C1HYS
#define T1ACS                CM2CON1_bits.T1ACS
#define MC2OUT               CM2CON1_bits.MC2OUT
#define MC1OUT               CM2CON1_bits.MC1OUT
#endif /* NO_BIT_DEFINES */

// ----- ECCPAS bits --------------------
typedef union {
  struct {
    unsigned char PSSBD0:1;
    unsigned char PSSBD1:1;
    unsigned char PSSAC0:1;
    unsigned char PSSAC1:1;
    unsigned char ECCPAS0:1;
    unsigned char ECCPAS1:1;
    unsigned char ECCPAS2:1;
    unsigned char ECCPASE:1;
  };
} __ECCPAS_bits_t;
extern volatile __ECCPAS_bits_t __at(ECCPAS_ADDR) ECCPAS_bits;

#ifndef NO_BIT_DEFINES
#define PSSBD0               ECCPAS_bits.PSSBD0
#define PSSBD1               ECCPAS_bits.PSSBD1
#define PSSAC0               ECCPAS_bits.PSSAC0
#define PSSAC1               ECCPAS_bits.PSSAC1
#define ECCPAS0              ECCPAS_bits.ECCPAS0
#define ECCPAS1              ECCPAS_bits.ECCPAS1
#define ECCPAS2              ECCPAS_bits.ECCPAS2
#define ECCPASE              ECCPAS_bits.ECCPASE
#endif /* NO_BIT_DEFINES */

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RAIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RAIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#ifndef NO_BIT_DEFINES
#define RAIF                 INTCON_bits.RAIF
#define INTF                 INTCON_bits.INTF
#define T0IF                 INTCON_bits.T0IF
#define RAIE                 INTCON_bits.RAIE
#define INTE                 INTCON_bits.INTE
#define T0IE                 INTCON_bits.T0IE
#define PEIE                 INTCON_bits.PEIE
#define GIE                  INTCON_bits.GIE
#endif /* NO_BIT_DEFINES */

// ----- IOC bits --------------------
typedef union {
  struct {
    unsigned char IOC0:1;
    unsigned char IOC1:1;
    unsigned char IOC2:1;
    unsigned char IOC3:1;
    unsigned char IOC4:1;
    unsigned char IOC5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOC_bits_t;
extern volatile __IOC_bits_t __at(IOC_ADDR) IOC_bits;

#ifndef NO_BIT_DEFINES
#define IOC0                 IOC_bits.IOC0
#define IOC1                 IOC_bits.IOC1
#define IOC2                 IOC_bits.IOC2
#define IOC3                 IOC_bits.IOC3
#define IOC4                 IOC_bits.IOC4
#define IOC5                 IOC_bits.IOC5
#endif /* NO_BIT_DEFINES */

// ----- IOCA bits --------------------
typedef union {
  struct {
    unsigned char IOCA0:1;
    unsigned char IOCA1:1;
    unsigned char IOCA2:1;
    unsigned char IOCA3:1;
    unsigned char IOCA4:1;
    unsigned char IOCA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __IOCA_bits_t;
extern volatile __IOCA_bits_t __at(IOCA_ADDR) IOCA_bits;

#ifndef NO_BIT_DEFINES
#define IOCA0                IOCA_bits.IOCA0
#define IOCA1                IOCA_bits.IOCA1
#define IOCA2                IOCA_bits.IOCA2
#define IOCA3                IOCA_bits.IOCA3
#define IOCA4                IOCA_bits.IOCA4
#define IOCA5                IOCA_bits.IOCA5
#endif /* NO_BIT_DEFINES */

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_RAPU:1;
  };
} __OPTION_REG_bits_t;
extern volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;

#ifndef NO_BIT_DEFINES
#define PS0                  OPTION_REG_bits.PS0
#define PS1                  OPTION_REG_bits.PS1
#define PS2                  OPTION_REG_bits.PS2
#define PSA                  OPTION_REG_bits.PSA
#define T0SE                 OPTION_REG_bits.T0SE
#define T0CS                 OPTION_REG_bits.T0CS
#define INTEDG               OPTION_REG_bits.INTEDG
#define NOT_RAPU             OPTION_REG_bits.NOT_RAPU
#endif /* NO_BIT_DEFINES */

// ----- OSCTUNE bits --------------------
typedef union {
  struct {
    unsigned char TUN0:1;
    unsigned char TUN1:1;
    unsigned char TUN2:1;
    unsigned char TUN3:1;
    unsigned char TUN4:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __OSCTUNE_bits_t;
extern volatile __OSCTUNE_bits_t __at(OSCTUNE_ADDR) OSCTUNE_bits;

#ifndef NO_BIT_DEFINES
#define TUN0                 OSCTUNE_bits.TUN0
#define TUN1                 OSCTUNE_bits.TUN1
#define TUN2                 OSCTUNE_bits.TUN2
#define TUN3                 OSCTUNE_bits.TUN3
#define TUN4                 OSCTUNE_bits.TUN4
#endif /* NO_BIT_DEFINES */

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOD:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char NOT_BOR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCON_bits_t;
extern volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;

#ifndef NO_BIT_DEFINES
#define NOT_BOD              PCON_bits.NOT_BOD
#define NOT_BOR              PCON_bits.NOT_BOR
#define NOT_POR              PCON_bits.NOT_POR
#endif /* NO_BIT_DEFINES */

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char T1IE:1;
    unsigned char T2IE:1;
    unsigned char :1;
    unsigned char C1IE:1;
    unsigned char C2IE:1;
    unsigned char CCP1IE:1;
    unsigned char ADIE:1;
    unsigned char :1;
  };
  struct {
    unsigned char TMR1IE:1;
    unsigned char TMR2IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#ifndef NO_BIT_DEFINES
#define T1IE                 PIE1_bits.T1IE
#define TMR1IE               PIE1_bits.TMR1IE
#define T2IE                 PIE1_bits.T2IE
#define TMR2IE               PIE1_bits.TMR2IE
#define C1IE                 PIE1_bits.C1IE
#define C2IE                 PIE1_bits.C2IE
#define CCP1IE               PIE1_bits.CCP1IE
#define ADIE                 PIE1_bits.ADIE
#endif /* NO_BIT_DEFINES */

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char T1IF:1;
    unsigned char T2IF:1;
    unsigned char :1;
    unsigned char C1IF:1;
    unsigned char C2IF:1;
    unsigned char CCP1IF:1;
    unsigned char ADIF:1;
    unsigned char :1;
  };
  struct {
    unsigned char TMR1IF:1;
    unsigned char TMR2IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#ifndef NO_BIT_DEFINES
#define T1IF                 PIR1_bits.T1IF
#define TMR1IF               PIR1_bits.TMR1IF
#define T2IF                 PIR1_bits.T2IF
#define TMR2IF               PIR1_bits.TMR2IF
#define C1IF                 PIR1_bits.C1IF
#define C2IF                 PIR1_bits.C2IF
#define CCP1IF               PIR1_bits.CCP1IF
#define ADIF                 PIR1_bits.ADIF
#endif /* NO_BIT_DEFINES */

// ----- PORTA bits --------------------
typedef union {
  struct {
    unsigned char RA0:1;
    unsigned char RA1:1;
    unsigned char RA2:1;
    unsigned char RA3:1;
    unsigned char RA4:1;
    unsigned char RA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __PORTA_bits_t;
extern volatile __PORTA_bits_t __at(PORTA_ADDR) PORTA_bits;

#ifndef NO_BIT_DEFINES
#define RA0                  PORTA_bits.RA0
#define RA1                  PORTA_bits.RA1
#define RA2                  PORTA_bits.RA2
#define RA3                  PORTA_bits.RA3
#define RA4                  PORTA_bits.RA4
#define RA5                  PORTA_bits.RA5
#endif /* NO_BIT_DEFINES */

// ----- PORTC bits --------------------
typedef union {
  struct {
    unsigned char RC0:1;
    unsigned char RC1:1;
    unsigned char RC2:1;
    unsigned char RC3:1;
    unsigned char RC4:1;
    unsigned char RC5:1;
    unsigned char RC6:1;
    unsigned char RC7:1;
  };
} __PORTC_bits_t;
extern volatile __PORTC_bits_t __at(PORTC_ADDR) PORTC_bits;

#ifndef NO_BIT_DEFINES
#define RC0                  PORTC_bits.RC0
#define RC1                  PORTC_bits.RC1
#define RC2                  PORTC_bits.RC2
#define RC3                  PORTC_bits.RC3
#define RC4                  PORTC_bits.RC4
#define RC5                  PORTC_bits.RC5
#define RC6                  PORTC_bits.RC6
#define RC7                  PORTC_bits.RC7
#endif /* NO_BIT_DEFINES */

// ----- PWM1CON bits --------------------
typedef union {
  struct {
    unsigned char PDC0:1;
    unsigned char PDC1:1;
    unsigned char PDC2:1;
    unsigned char PDC3:1;
    unsigned char PDC4:1;
    unsigned char PDC5:1;
    unsigned char PDC6:1;
    unsigned char PRSEN:1;
  };
} __PWM1CON_bits_t;
extern volatile __PWM1CON_bits_t __at(PWM1CON_ADDR) PWM1CON_bits;

#ifndef NO_BIT_DEFINES
#define PDC0                 PWM1CON_bits.PDC0
#define PDC1                 PWM1CON_bits.PDC1
#define PDC2                 PWM1CON_bits.PDC2
#define PDC3                 PWM1CON_bits.PDC3
#define PDC4                 PWM1CON_bits.PDC4
#define PDC5                 PWM1CON_bits.PDC5
#define PDC6                 PWM1CON_bits.PDC6
#define PRSEN                PWM1CON_bits.PRSEN
#endif /* NO_BIT_DEFINES */

// ----- SRCON0 bits --------------------
typedef union {
  struct {
    unsigned char SRCLKEN:1;
    unsigned char :1;
    unsigned char PULSR:1;
    unsigned char PULSS:1;
    unsigned char C2SEN:1;
    unsigned char C1SEN:1;
    unsigned char SR0:1;
    unsigned char SR1:1;
  };
} __SRCON0_bits_t;
extern volatile __SRCON0_bits_t __at(SRCON0_ADDR) SRCON0_bits;

#ifndef NO_BIT_DEFINES
#define SRCLKEN              SRCON0_bits.SRCLKEN
#define PULSR                SRCON0_bits.PULSR
#define PULSS                SRCON0_bits.PULSS
#define C2SEN                SRCON0_bits.C2SEN
#define C1SEN                SRCON0_bits.C1SEN
#define SR0                  SRCON0_bits.SR0
#define SR1                  SRCON0_bits.SR1
#endif /* NO_BIT_DEFINES */

// ----- SRCON1 bits --------------------
typedef union {
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char SRCS2:1;
    unsigned char SRCS1:1;
  };
} __SRCON1_bits_t;
extern volatile __SRCON1_bits_t __at(SRCON1_ADDR) SRCON1_bits;

#ifndef NO_BIT_DEFINES
#define SRCS2                SRCON1_bits.SRCS2
#define SRCS1                SRCON1_bits.SRCS1
#endif /* NO_BIT_DEFINES */

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUS_bits_t;
extern volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;

#ifndef NO_BIT_DEFINES
#define C                    STATUS_bits.C
#define DC                   STATUS_bits.DC
#define Z                    STATUS_bits.Z
#define NOT_PD               STATUS_bits.NOT_PD
#define NOT_TO               STATUS_bits.NOT_TO
#define RP0                  STATUS_bits.RP0
#define RP1                  STATUS_bits.RP1
#define IRP                  STATUS_bits.IRP
#endif /* NO_BIT_DEFINES */

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char T1GINV:1;
  };
} __T1CON_bits_t;
extern volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;

#ifndef NO_BIT_DEFINES
#define TMR1ON               T1CON_bits.TMR1ON
#define TMR1CS               T1CON_bits.TMR1CS
#define NOT_T1SYNC           T1CON_bits.NOT_T1SYNC
#define T1OSCEN              T1CON_bits.T1OSCEN
#define T1CKPS0              T1CON_bits.T1CKPS0
#define T1CKPS1              T1CON_bits.T1CKPS1
#define TMR1GE               T1CON_bits.TMR1GE
#define T1GINV               T1CON_bits.T1GINV
#endif /* NO_BIT_DEFINES */

// ----- T2CON bits --------------------
typedef union {
  struct {
    unsigned char T2CKPS0:1;
    unsigned char T2CKPS1:1;
    unsigned char TMR2ON:1;
    unsigned char TOUTPS0:1;
    unsigned char TOUTPS1:1;
    unsigned char TOUTPS2:1;
    unsigned char TOUTPS3:1;
    unsigned char :1;
  };
} __T2CON_bits_t;
extern volatile __T2CON_bits_t __at(T2CON_ADDR) T2CON_bits;

#ifndef NO_BIT_DEFINES
#define T2CKPS0              T2CON_bits.T2CKPS0
#define T2CKPS1              T2CON_bits.T2CKPS1
#define TMR2ON               T2CON_bits.TMR2ON
#define TOUTPS0              T2CON_bits.TOUTPS0
#define TOUTPS1              T2CON_bits.TOUTPS1
#define TOUTPS2              T2CON_bits.TOUTPS2
#define TOUTPS3              T2CON_bits.TOUTPS3
#endif /* NO_BIT_DEFINES */

// ----- TRISA bits --------------------
typedef union {
  struct {
    unsigned char TRISA0:1;
    unsigned char TRISA1:1;
    unsigned char TRISA2:1;
    unsigned char TRISA3:1;
    unsigned char TRISA4:1;
    unsigned char TRISA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __TRISA_bits_t;
extern volatile __TRISA_bits_t __at(TRISA_ADDR) TRISA_bits;

#ifndef NO_BIT_DEFINES
#define TRISA0               TRISA_bits.TRISA0
#define TRISA1               TRISA_bits.TRISA1
#define TRISA2               TRISA_bits.TRISA2
#define TRISA3               TRISA_bits.TRISA3
#define TRISA4               TRISA_bits.TRISA4
#define TRISA5               TRISA_bits.TRISA5
#endif /* NO_BIT_DEFINES */

// ----- TRISC bits --------------------
typedef union {
  struct {
    unsigned char TRISC0:1;
    unsigned char TRISC1:1;
    unsigned char TRISC2:1;
    unsigned char TRISC3:1;
    unsigned char TRISC4:1;
    unsigned char TRISC5:1;
    unsigned char TRISC6:1;
    unsigned char TRISC7:1;
  };
} __TRISC_bits_t;
extern volatile __TRISC_bits_t __at(TRISC_ADDR) TRISC_bits;

#ifndef NO_BIT_DEFINES
#define TRISC0               TRISC_bits.TRISC0
#define TRISC1               TRISC_bits.TRISC1
#define TRISC2               TRISC_bits.TRISC2
#define TRISC3               TRISC_bits.TRISC3
#define TRISC4               TRISC_bits.TRISC4
#define TRISC5               TRISC_bits.TRISC5
#define TRISC6               TRISC_bits.TRISC6
#define TRISC7               TRISC_bits.TRISC7
#endif /* NO_BIT_DEFINES */

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char VP6EN:1;
    unsigned char VRR:1;
    unsigned char C2VREN:1;
    unsigned char C1VREN:1;
  };
} __VRCON_bits_t;
extern volatile __VRCON_bits_t __at(VRCON_ADDR) VRCON_bits;

#ifndef NO_BIT_DEFINES
#define VR0                  VRCON_bits.VR0
#define VR1                  VRCON_bits.VR1
#define VR2                  VRCON_bits.VR2
#define VR3                  VRCON_bits.VR3
#define VP6EN                VRCON_bits.VP6EN
#define VRR                  VRCON_bits.VRR
#define C2VREN               VRCON_bits.C2VREN
#define C1VREN               VRCON_bits.C1VREN
#endif /* NO_BIT_DEFINES */

// ----- WPU bits --------------------
typedef union {
  struct {
    unsigned char WPU0:1;
    unsigned char WPU1:1;
    unsigned char WPU2:1;
    unsigned char :1;
    unsigned char WPU4:1;
    unsigned char WPU5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPU_bits_t;
extern volatile __WPU_bits_t __at(WPU_ADDR) WPU_bits;

#ifndef NO_BIT_DEFINES
#define WPU0                 WPU_bits.WPU0
#define WPU1                 WPU_bits.WPU1
#define WPU2                 WPU_bits.WPU2
#define WPU4                 WPU_bits.WPU4
#define WPU5                 WPU_bits.WPU5
#endif /* NO_BIT_DEFINES */

// ----- WPUA bits --------------------
typedef union {
  struct {
    unsigned char WPUA0:1;
    unsigned char WPUA1:1;
    unsigned char WPUA2:1;
    unsigned char :1;
    unsigned char WPUA4:1;
    unsigned char WPUA5:1;
    unsigned char :1;
    unsigned char :1;
  };
} __WPUA_bits_t;
extern volatile __WPUA_bits_t __at(WPUA_ADDR) WPUA_bits;

#ifndef NO_BIT_DEFINES
#define WPUA0                WPUA_bits.WPUA0
#define WPUA1                WPUA_bits.WPUA1
#define WPUA2                WPUA_bits.WPUA2
#define WPUA4                WPUA_bits.WPUA4
#define WPUA5                WPUA_bits.WPUA5
#endif /* NO_BIT_DEFINES */

#endif
