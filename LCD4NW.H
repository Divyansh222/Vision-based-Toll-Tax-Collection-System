/**************************************************************************************************
Last Update: 13th Nov 2007
Aim: This Contains Various Functions for Displaying on LCD 
**************************************************************************************************/
//-------------------------------------------------------------------------------------------------
#ifndef __LCD4NW_H__
#define __LCD4NW_H__

#define	RS		P1_2			//registor select
#define E		P1_3			//enable
#define DATA	P1			//data lines


#pragma SAVE
#pragma REGPARMS

extern void SetLCD(void);		//initiates LCD
extern void LCD(unsigned char L);//0-clear display, 1-Line 1, 2-Line 2 
extern char putchar(char);		//prints single character on LCD

#pragma RESTORE

#endif
