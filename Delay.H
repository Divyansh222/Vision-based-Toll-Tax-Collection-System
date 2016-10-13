/**************************************************************************************************
Last Update: 14th Nov 2007
Aim: This Contains Various Functions for Delayed Tasks 
//************************************************************************************************/
#ifndef __DELAY_H__
#define __DELAY_H__

#pragma SAVE
#pragma REGPARMS
extern void DelayL(unsigned long Delay);//Delay for long time
extern void DelayI(unsigned int Delay);//Delay for small time
extern void DelayU(unsigned int Delay);//Delay for specific microseconds
extern void DelayM(unsigned int Delay);//Delay for specific milliseconds
#pragma RESTORE

#endif
