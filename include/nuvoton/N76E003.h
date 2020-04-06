/*--------------------------------------------------------------------------
N76E003.H

Header file for Nuvoton N76E003
--------------------------------------------------------------------------*/

__sfr __at(0x80) P0;
#define __SFR_P0 0x80
__sfr __at(0x81) SP;
#define __SFR_SP 0x81
__sfr __at(0x82) DPL;
#define __SFR_DPL 0x82
__sfr __at(0x83) DPH;
#define __SFR_DPH 0x83
__sfr __at(0x84) RCTRIM0;
#define __SFR_RCTRIM0 0x84
__sfr __at(0x85) RCTRIM1;	
#define __SFR_RCTRIM1 0x85
__sfr __at(0x86) RWK;
#define __SFR_RWK 0x86
__sfr __at(0x87) PCON;
#define __SFR_PCON 0x87

__sfr __at(0x88) TCON;
#define __SFR_TCON 0x88
__sfr __at(0x89) TMOD;
#define __SFR_TMOD 0x89
__sfr __at(0x8A) TL0;
#define __SFR_TL0 0x8A
__sfr __at(0x8B) TL1;
#define __SFR_TL1 0x8B
__sfr __at(0x8C) TH0;
#define __SFR_TH0 0x8C
__sfr __at(0x8D) TH1;
#define __SFR_TH1 0x8D
__sfr __at(0x8E) CKCON;
#define __SFR_CKCON 0x8E
__sfr __at(0x8F) WKCON;
#define __SFR_WKCON 0x8F

__sfr __at(0x90) P1;
#define __SFR_P1 0x90
__sfr __at(0x91) SFRS; //TA Protection
#define __SFR_SFRS 0x91
__sfr __at(0x92) CAPCON0;
#define __SFR_CAPCON0 0x92
__sfr __at(0x93) CAPCON1;
#define __SFR_CAPCON1 0x93
__sfr __at(0x94) CAPCON2;
#define __SFR_CAPCON2 0x94
__sfr __at(0x95) CKDIV;
#define __SFR_CKDIV 0x95
__sfr __at(0x96) CKSWT; //TA Protection
#define __SFR_CKSWT 0x96
__sfr __at(0x97) CKEN; //TA Protection
#define __SFR_CKEN 0x97

__sfr __at(0x98) SCON;
#define __SFR_SCON 0x98
__sfr __at(0x99) SBUF;
#define __SFR_SBUF 0x99
__sfr __at(0x9A) SBUF_1;
#define __SFR_SBUF_1 0x9A
__sfr __at(0x9B) EIE;
#define __SFR_EIE 0x9B
__sfr __at(0x9C) EIE1;
#define __SFR_EIE1 0x9C
__sfr __at(0x9F) CHPCON; //TA Protection
#define __SFR_CHPCON 0x9F

__sfr __at(0xA0) P2;
#define __SFR_P2 0xA0
__sfr __at(0xA2) AUXR1;
#define __SFR_AUXR1 0xA2
__sfr __at(0xA3) BODCON0; //TA Protection
#define __SFR_BODCON0 0xA3
__sfr __at(0xA4) IAPTRG; //TA Protection
#define __SFR_IAPTRG 0xA4
__sfr __at(0xA5) IAPUEN;	//TA Protection
#define __SFR_IAPUEN 0xA5
__sfr __at(0xA6) IAPAL;
#define __SFR_IAPAL 0xA6
__sfr __at(0xA7) IAPAH;
#define __SFR_IAPAH 0xA7

__sfr __at(0xA8) IE;
#define __SFR_IE 0xA8
__sfr __at(0xA9) SADDR;
#define __SFR_SADDR 0xA9
__sfr __at(0xAA) WDCON; //TA Protection
#define __SFR_WDCON 0xAA
__sfr __at(0xAB) BODCON1; //TA Protection
#define __SFR_BODCON1 0xAB
__sfr __at(0xAC) P3M1;
#define __SFR_P3M1 0xAC
__sfr __at(0xAC) P3S; //Page1
#define __SFR_P3S 0xAC
__sfr __at(0xAD) P3M2;
#define __SFR_P3M2 0xAD
__sfr __at(0xAD) P3SR; //Page1
#define __SFR_P3SR 0xAD
__sfr __at(0xAE) IAPFD;
#define __SFR_IAPFD 0xAE
__sfr __at(0xAF) IAPCN;
#define __SFR_IAPCN 0xAF

__sfr __at(0xB0) P3;
#define __SFR_P3 0xB0
__sfr __at(0xB1) P0M1;
#define __SFR_P0M1 0xB1
__sfr __at(0xB1) P0S; //Page1
#define __SFR_P0S 0xB1
__sfr __at(0xB2) P0M2;
#define __SFR_P0M2 0xB2
__sfr __at(0xB2) P0SR; //Page1
#define __SFR_P0SR 0xB2
__sfr __at(0xB3) P1M1;
#define __SFR_P1M1 0xB3
__sfr __at(0xB3) P1S; //Page1
#define __SFR_P1S 0xB3
__sfr __at(0xB4) P1M2;
#define __SFR_P1M2 0xB4
__sfr __at(0xB4) P1SR; //Page1
#define __SFR_P1SR 0xB4
__sfr __at(0xB5) P2S; 
#define __SFR_P2S 0xB5
__sfr __at(0xB7) IPH;
#define __SFR_IPH 0xB7
__sfr __at(0xB7) PWMINTC;	//Page1
#define __SFR_PWMINTC 0xB7

__sfr __at(0xB8) IP;
#define __SFR_IP 0xB8
__sfr __at(0xB9) SADEN;
#define __SFR_SADEN 0xB9
__sfr __at(0xBA) SADEN_1;
#define __SFR_SADEN_1 0xBA
__sfr __at(0xBB) SADDR_1;
#define __SFR_SADDR_1 0xBB
__sfr __at(0xBC) I2DAT;
#define __SFR_I2DAT 0xBC
__sfr __at(0xBD) I2STAT;
#define __SFR_I2STAT 0xBD
__sfr __at(0xBE) I2CLK;
#define __SFR_I2CLK 0xBE
__sfr __at(0xBF) I2TOC;
#define __SFR_I2TOC 0xBF

__sfr __at(0xC0) I2CON;
#define __SFR_I2CON 0xC0
__sfr __at(0xC1) I2ADDR;
#define __SFR_I2ADDR 0xC1
__sfr __at(0xC2) ADCRL;
#define __SFR_ADCRL 0xC2
__sfr __at(0xC3) ADCRH;
#define __SFR_ADCRH 0xC3
__sfr __at(0xC4) T3CON;
#define __SFR_T3CON 0xC4
__sfr __at(0xC4) PWM4H; //Page1
#define __SFR_PWM4H 0xC4
__sfr __at(0xC5) RL3;
#define __SFR_RL3 0xC5
__sfr __at(0xC5) PWM5H;	//Page1
#define __SFR_PWM5H 0xC5
__sfr __at(0xC6) RH3;
#define __SFR_RH3 0xC6
__sfr __at(0xC6) PIOCON1; //Page1
#define __SFR_PIOCON1 0xC6
__sfr __at(0xC7) TA;
#define __SFR_TA 0xC7

__sfr __at(0xC8) T2CON;
#define __SFR_T2CON 0xC8
__sfr __at(0xC9) T2MOD;
#define __SFR_T2MOD 0xC9
__sfr __at(0xCA) RCMP2L;
#define __SFR_RCMP2L 0xCA
__sfr __at(0xCB) RCMP2H;
#define __SFR_RCMP2H 0xCB
__sfr __at(0xCC) TL2; 
#define __SFR_TL2 0xCC
__sfr __at(0xCC) PWM4L; //Page1
#define __SFR_PWM4L 0xCC
__sfr __at(0xCD) TH2;
#define __SFR_TH2 0xCD
__sfr __at(0xCD) PWM5L; //Page1
#define __SFR_PWM5L 0xCD
__sfr __at(0xCE) ADCMPL;
#define __SFR_ADCMPL 0xCE
__sfr __at(0xCF) ADCMPH;
#define __SFR_ADCMPH 0xCF

__sfr __at(0xD0) PSW;
#define __SFR_PSW 0xD0
__sfr __at(0xD1) PWMPH;
#define __SFR_PWMPH 0xD1
__sfr __at(0xD2) PWM0H;
#define __SFR_PWM0H 0xD2
__sfr __at(0xD3) PWM1H;
#define __SFR_PWM1H 0xD3
__sfr __at(0xD4) PWM2H;
#define __SFR_PWM2H 0xD4
__sfr __at(0xD5) PWM3H;
#define __SFR_PWM3H 0xD5
__sfr __at(0xD6) PNP;
#define __SFR_PNP 0xD6
__sfr __at(0xD7) FBD;
#define __SFR_FBD 0xD7

__sfr __at(0xD8) PWMCON0;
#define __SFR_PWMCON0 0xD8
__sfr __at(0xD9) PWMPL;
#define __SFR_PWMPL 0xD9
__sfr __at(0xDA) PWM0L;
#define __SFR_PWM0L 0xDA
__sfr __at(0xDB) PWM1L;
#define __SFR_PWM1L 0xDB
__sfr __at(0xDC) PWM2L;
#define __SFR_PWM2L 0xDC
__sfr __at(0xDD) PWM3L;
#define __SFR_PWM3L 0xDD
__sfr __at(0xDE) PIOCON0;
#define __SFR_PIOCON0 0xDE
__sfr __at(0xDF) PWMCON1;
#define __SFR_PWMCON1 0xDF

__sfr __at(0xE0) ACC;
#define __SFR_ACC 0xE0
__sfr __at(0xE1) ADCCON1;
#define __SFR_ADCCON1 0xE1
__sfr __at(0xE2) ADCCON2;
#define __SFR_ADCCON2 0xE2
__sfr __at(0xE3) ADCDLY;
#define __SFR_ADCDLY 0xE3
__sfr __at(0xE4) C0L;
#define __SFR_C0L 0xE4
__sfr __at(0xE5) C0H;
#define __SFR_C0H 0xE5
__sfr __at(0xE6) C1L;
#define __SFR_C1L 0xE6
__sfr __at(0xE7) C1H;
#define __SFR_C1H 0xE7

__sfr __at(0xE8) ADCCON0;
#define __SFR_ADCCON0 0xE8
__sfr __at(0xE9) PICON;
#define __SFR_PICON 0xE9
__sfr __at(0xEA) PINEN;
#define __SFR_PINEN 0xEA
__sfr __at(0xEB) PIPEN;
#define __SFR_PIPEN 0xEB
__sfr __at(0xEC) PIF;
#define __SFR_PIF 0xEC
__sfr __at(0xED) C2L;
#define __SFR_C2L 0xED
__sfr __at(0xEE) C2H;
#define __SFR_C2H 0xEE
__sfr __at(0xEF) EIP;
#define __SFR_EIP 0xEF

__sfr __at(0xF0) B;
#define __SFR_B 0xF0
__sfr __at(0xF1) CAPCON3;
#define __SFR_CAPCON3 0xF1
__sfr __at(0xF2) CAPCON4;
#define __SFR_CAPCON4 0xF2
__sfr __at(0xF3) SPCR;
#define __SFR_SPCR 0xF3
__sfr __at(0xF3) SPCR2; //Page1
#define __SFR_SPCR2 0xF3
__sfr __at(0xF4) SPSR;
#define __SFR_SPSR 0xF4
__sfr __at(0xF5) SPDR;
#define __SFR_SPDR 0xF5
__sfr __at(0xF6) AINDIDS;
#define __SFR_AINDIDS 0xF6
__sfr __at(0xF7) EIPH;
#define __SFR_EIPH 0xF7

__sfr __at(0xF8) SCON_1;
#define __SFR_SCON_1 0xF8
__sfr __at(0xF9) PDTEN; //TA Protection
#define __SFR_PDTEN 0xF9
__sfr __at(0xFA) PDTCNT; //TA Protection
#define __SFR_PDTCNT 0xFA
__sfr __at(0xFB) PMEN;
#define __SFR_PMEN 0xFB
__sfr __at(0xFC) PMD;
#define __SFR_PMD 0xFC
__sfr __at(0xFE) EIP1;
#define __SFR_EIP1 0xFE
__sfr __at(0xFF) EIPH1;
#define __SFR_EIPH1 0xFF

/*  BIT Registers  */
/*  SCON_1  */
__sbit __at(__SFR_SCON_1^7) SM0_1;
__sbit __at(__SFR_SCON_1^7) FE_1; 
__sbit __at(__SFR_SCON_1^6) SM1_1; 
__sbit __at(__SFR_SCON_1^5) SM2_1; 
__sbit __at(__SFR_SCON_1^4) REN_1; 
__sbit __at(__SFR_SCON_1^3) TB8_1; 
__sbit __at(__SFR_SCON_1^2) RB8_1; 
__sbit __at(__SFR_SCON_1^1) TI_1; 
__sbit __at(__SFR_SCON_1^0) RI_1; 

/*  ADCCON0  */
__sbit __at(__SFR_ADCCON0^7) ADCF;
__sbit __at(__SFR_ADCCON0^6) ADCS;
__sbit __at(__SFR_ADCCON0^5) ETGSEL1;
__sbit __at(__SFR_ADCCON0^4) ETGSEL0;
__sbit __at(__SFR_ADCCON0^3) ADCHS3;
__sbit __at(__SFR_ADCCON0^2) ADCHS2;
__sbit __at(__SFR_ADCCON0^1) ADCHS1;
__sbit __at(__SFR_ADCCON0^0) ADCHS0;

/*  PWMCON0  */
__sbit __at(__SFR_PWMCON0^7) PWMRUN;
__sbit __at(__SFR_PWMCON0^6) LOAD;
__sbit __at(__SFR_PWMCON0^5) PWMF;
__sbit __at(__SFR_PWMCON0^4) CLRPWM;


/*  PSW */
__sbit __at(__SFR_PSW^7) CY;
__sbit __at(__SFR_PSW^6) AC;
__sbit __at(__SFR_PSW^5) F0;
__sbit __at(__SFR_PSW^4) RS1;
__sbit __at(__SFR_PSW^3) RS0;
__sbit __at(__SFR_PSW^2) OV;
__sbit __at(__SFR_PSW^0) P;

/*  T2CON  */
__sbit __at(__SFR_T2CON^7) TF2;
__sbit __at(__SFR_T2CON^2) TR2;
__sbit __at(__SFR_T2CON^0) CM_RL2;

/*  I2CON  */
__sbit __at(__SFR_I2CON^6) I2CEN;
__sbit __at(__SFR_I2CON^5) STA;
__sbit __at(__SFR_I2CON^4) STO;
__sbit __at(__SFR_I2CON^3) SI;
__sbit __at(__SFR_I2CON^2) AA;
__sbit __at(__SFR_I2CON^0) I2CPX;

/*  IP  */  
__sbit __at(__SFR_IP^6) PADC;
__sbit __at(__SFR_IP^5) PBOD;
__sbit __at(__SFR_IP^4) PS;
__sbit __at(__SFR_IP^3) PT1;
__sbit __at(__SFR_IP^2) PX1;
__sbit __at(__SFR_IP^1) PT0;
__sbit __at(__SFR_IP^0) PX0;

/*  P3  */  
__sbit __at(__SFR_P3^0) P30;


/*  IE  */
__sbit __at(__SFR_IE^7) EA;
__sbit __at(__SFR_IE^6) EADC;
__sbit __at(__SFR_IE^5) EBOD;
__sbit __at(__SFR_IE^4) ES;
__sbit __at(__SFR_IE^3) ET1;
__sbit __at(__SFR_IE^2) EX1;
__sbit __at(__SFR_IE^1) ET0;
__sbit __at(__SFR_IE^0) EX0;

/*  P2  */ 
__sbit __at(__SFR_P2^0) P20;

/*  SCON  */
__sbit __at(__SFR_SCON^7) SM0;
__sbit __at(__SFR_SCON^7) FE; 
__sbit __at(__SFR_SCON^6) SM1; 
__sbit __at(__SFR_SCON^5) SM2; 
__sbit __at(__SFR_SCON^4) REN; 
__sbit __at(__SFR_SCON^3) TB8; 
__sbit __at(__SFR_SCON^2) RB8; 
__sbit __at(__SFR_SCON^1) TI; 
__sbit __at(__SFR_SCON^0) RI; 

/*  P1  */     
__sbit __at(__SFR_P1^7) P17;
__sbit __at(__SFR_P1^6) P16;
__sbit __at(__SFR_P1^6) TXD_1; 
__sbit __at(__SFR_P1^5) P15;
__sbit __at(__SFR_P1^4) P14;
__sbit __at(__SFR_P1^4) SDA;    
__sbit __at(__SFR_P1^3) P13;
__sbit __at(__SFR_P1^3) SCL;  
__sbit __at(__SFR_P1^2) P12; 
__sbit __at(__SFR_P1^1) P11;
__sbit __at(__SFR_P1^0) P10;

/*  TCON  */
__sbit __at(__SFR_TCON^7) TF1;
__sbit __at(__SFR_TCON^6) TR1;
__sbit __at(__SFR_TCON^5) TF0;
__sbit __at(__SFR_TCON^4) TR0;
__sbit __at(__SFR_TCON^3) IE1;
__sbit __at(__SFR_TCON^2) IT1;
__sbit __at(__SFR_TCON^1) IE0;
__sbit __at(__SFR_TCON^0) IT0;

/*  P0  */  

__sbit __at(__SFR_P0^7) P07;
__sbit __at(__SFR_P0^7) RXD;
__sbit __at(__SFR_P0^6) P06;
__sbit __at(__SFR_P0^6) TXD;
__sbit __at(__SFR_P0^5) P05;
__sbit __at(__SFR_P0^4) P04;
__sbit __at(__SFR_P0^4) STADC;
__sbit __at(__SFR_P0^3) P03;
__sbit __at(__SFR_P0^2) P02;
__sbit __at(__SFR_P0^2) RXD_1;
__sbit __at(__SFR_P0^1) P01;
__sbit __at(__SFR_P0^1) MISO;
__sbit __at(__SFR_P0^0) P00;
__sbit __at(__SFR_P0^0) MOSI;



















/*--------------------------------------------------------------------------
N76E003.H

Header file for Nuvoton N76E003
--------------------------------------------------------------------------*/

