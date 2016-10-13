/**************************************************************************************************
Last Update: 13th Nov 2007
Aim: This Contains Various Functions for Controlling Serial Communication
**************************************************************************************************/
#ifndef __SERIAL_H__
#define __SERIAL_H__

#pragma SAVE
#pragma REGPARMS
extern void SetSerial(unsigned long BaudRate,unsigned long XTAL,unsigned char ClkDiv);//intitialize serial port,baudrate,xtal frequency,clock divider
extern void SetSerial115200(void);//set fixed baudrate for phlips
extern void Send(unsigned char c);//transmits one character 
extern void SendString(unsigned char *String,unsigned char Len);//transmit complete string
extern unsigned char Read(void);//reads one character & waits till it comes   
extern unsigned char ReadD(unsigned int Delay);//reads one character & waits for specified time only  
#pragma RESTORE

#endif
