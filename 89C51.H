/**************************************************************************************************
Last Update: 13th Nov 2007
Aim: This Contains Various Registor Definations for 89C51 MC 
**************************************************************************************************/
//-------------------------------------------------------------------------------------------------
#ifndef __89C51_H__
#define __89C51_H__
//-------------------------------------------------------------------------------------------------
//Byte Registers
sfr P0      = 0x80;
sfr SP      = 0x81;
sfr DPL     = 0x82;
sfr DPH     = 0x83;
sfr PCON    = 0x87;
sfr TCON    = 0x88;
sfr TMOD    = 0x89;
sfr TL0     = 0x8A;
sfr TL1     = 0x8B;
sfr TH0     = 0x8C;
sfr TH1     = 0x8D;
sfr P1      = 0x90;
sfr SCON    = 0x98;
sfr SBUF    = 0x99;
sfr P2      = 0xA0;
sfr IE      = 0xA8;
sfr P3      = 0xB0;
sfr IP      = 0xB8;
sfr PSW     = 0xD0;
sfr ACC     = 0xE0;
sfr B       = 0xF0;

//P0 Bit Registers
sbit P0_0 = 0x80;
sbit P0_1 = 0x81;
sbit P0_2 = 0x82;
sbit P0_3 = 0x83;
sbit P0_4 = 0x84;
sbit P0_5 = 0x85;
sbit P0_6 = 0x86;
sbit P0_7 = 0x87;

//P1 Bit Registers
sbit P1_0 = 0x90;
sbit P1_1 = 0x91;
sbit P1_2 = 0x92;
sbit P1_3 = 0x93;
sbit P1_4 = 0x94;
sbit P1_5 = 0x95;
sbit P1_6 = 0x96;
sbit P1_7 = 0x97;

//P2 Bit Registers
sbit P2_0 = 0xA0;
sbit P2_1 = 0xA1;
sbit P2_2 = 0xA2;
sbit P2_3 = 0xA3;
sbit P2_4 = 0xA4;
sbit P2_5 = 0xA5;
sbit P2_6 = 0xA6;
sbit P2_7 = 0xA7;

//P3 Bit Registers 
sbit P3_0 = 0xB0;
sbit P3_1 = 0xB1;
sbit P3_2 = 0xB2;
sbit P3_3 = 0xB3;
sbit P3_4 = 0xB4;
sbit P3_5 = 0xB5;
sbit P3_6 = 0xB6;
sbit P3_7 = 0xB7;

//ACC Bit Registers
sbit ACC_0 	= 0xE0;
sbit ACC_1  = 0xE1;
sbit ACC_2  = 0xE2;
sbit ACC_3  = 0xE3;
sbit ACC_4  = 0xE4;
sbit ACC_5  = 0xE5;
sbit ACC_6  = 0xE6;
sbit ACC_7  = 0xE7;

//B Bit Registers
sbit B_0 = 0xF0;
sbit B_1 = 0xF1;
sbit B_2 = 0xF2;
sbit B_3 = 0xF3;
sbit B_4 = 0xF4;
sbit B_5 = 0xF5;
sbit B_6 = 0xF6;
sbit B_7 = 0xF7;

//TCON Bit Registers
sbit IT0  = 0x88;
sbit IE0  = 0x89;
sbit IT1  = 0x8A;
sbit IE1  = 0x8B;
sbit TR0  = 0x8C;
sbit TF0  = 0x8D;
sbit TR1  = 0x8E;
sbit TF1  = 0x8F;

//SCON Bit Registers
sbit RI   = 0x98;
sbit TI   = 0x99;
sbit RB8  = 0x9A;
sbit TB8  = 0x9B;
sbit REN  = 0x9C;
sbit SM2  = 0x9D;
sbit SM1  = 0x9E;
sbit SM0  = 0x9F;

//IE Bit Registers
sbit EX0  = 0xA8;       
sbit ET0  = 0xA9;       
sbit EX1  = 0xAA;
sbit ET1  = 0xAB;
sbit ES   = 0xAC;
sbit ET2  = 0xAD;
sbit EA   = 0xAF;

#endif
