//Headers------------------------------------------------------------------------------------------
#include <stdio.h>										//standard input output
#include "89C51.h"										//89c51 definations
#include "Delay.h"
#include "Serial.h"
#include "LCD4NW.h"
//Definitions--------------------------------------------------------------------------------------
#define	MR			P0_0
#define	MB			P0_1
#define	IR			P3_2
#define Buzzer 	P3_7

#define rfVT		P2_4
#define rfPort	P2&0x0f
//Functions----------------------------------------------------------------------------------------
void Beep(unsigned char No,unsigned int Delay);
unsigned char ReadRF(unsigned long SDelay);
//Variables----------------------------------------------------------------------------------------
unsigned char CMD;
unsigned char RFID;
//-------------------------------------------------------------------------------------------------
//#################################################################################################
void main(void)
{												
	//Peripheral Initialization--------------------------------------------------------------------
	MR=MB=0;
	Beep(3,200);
	SetSerial(9600,11059200,12);
	SetLCD();

	//Greeting MSG--------------------------------------------------------------------------------- 
	LCD(1);printf("   Welcome to   ");
	LCD(2);printf("   K.C.C.O.E.   ");
	DelayM(3000);
	LCD(1);printf(" RFID & Vision  ");
	LCD(2);printf("Based Toll Tax. ");
	DelayM(3000);
	LCD(1);printf("Project Done by.");
	LCD(2);printf("****************");
	DelayM(3000);
	LCD(1);printf("Gaurav Shelar   ");
	LCD(2);printf("Mohit Tandon    ");
	DelayM(3000);
	LCD(1);printf("Amol Tannu      ");
	LCD(2);printf("Pradeep Singh   ");
	DelayM(3000);	
	LCD(1);printf("Under Guidance..");
	LCD(2);printf("Prof. Rajiv Iyer");
	DelayM(3000);
	//Greeting MSG--------------------------------------------------------------------------------- 

	LCD(1);printf("System Started..");
	LCD(2);printf("****************");
	DelayM(2000);

	while(1)
	{
		LCD(1);printf("Wating for      ");
		LCD(2);printf("Vehicle.........");
		
		while(IR==0);
		Beep(1,100);
		
		while(1)
		{
				RFID=ReadRF(30000);
				if((RFID==0)||(RFID==15))continue;
			
				LCD(0);
				LCD(1);printf("RFID:%bu",RFID);
				Beep(1,200);
				break;
		}
		
		//send trigger to PC
		Send(RFID);
		
		LCD(1);printf("      STOP      ");
		LCD(2);printf("  Pay the Tax   ");
		
		while((CMD=Read())!='S');	//wait for PC Response

		Beep(1,100);
		MR=1;MB=0;	//rotate motor
		DelayM(400);//wait for some time
		MR=0;MB=0;//stop motor
		
		LCD(1);printf("Thank You !!!   ");
		LCD(2);printf("You May Go......");
		
		while(IR==1);
		DelayM(2000);//wait for some time
		
		Beep(1,100);
		MR=0;MB=1;	//rotate motor
		DelayM(400);//wait for some time
		MR=0;MB=0;//stop motor
		
	}//end while		
}//main
//#################################################################################################
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
void Beep(unsigned char No,unsigned int Delay)
{
	unsigned char tNo;

	for(tNo=1;tNo<=No;tNo++)	
	{
	 	Buzzer=0;
		DelayM(Delay);
		Buzzer=1;
		DelayM(Delay);
	}
}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
unsigned char ReadRF(unsigned long SDelay)
{
	unsigned long tSDelay;						
	unsigned char KeyCode=0;

	for(tSDelay=0;tSDelay<=SDelay;tSDelay++)
	{
		if(rfVT)
		{
		 	KeyCode=rfPort;
			break;
		}			
	}
	return(KeyCode);
}
//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
