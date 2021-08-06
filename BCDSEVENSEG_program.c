/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 05/8/2021 11:30 AM                                                          */
/* version      : 01                                                                          */
/**********************************************************************************************/
#include "DIO_interface.h"
void BCDSEVENSEG_InitLowNibble(unsigned char port)
{
	DIO_SetPinDir(port,0,1);
	DIO_SetPinDir(port,1,1);
	DIO_SetPinDir(port,2,1);
	DIO_SetPinDir(port,3,1);
}
void BCDSEVENSEG_InitHighNibble(unsigned char port)
{
	DIO_SetPinDir(port,4,1);
	DIO_SetPinDir(port,5,1);
	DIO_SetPinDir(port,6,1);
	DIO_SetPinDir(port,7,1);
}
void BCDSEVENSEG_WriteHighNibble(unsigned char port,unsigned char value)
{
	
	DIO_WriteHighPins(port,4,value);
	DIO_WriteHighPins(port,5,value);
	DIO_WriteHighPins(port,6,value);
	DIO_WriteHighPins(port,7,value);
}

void BCDSEVENSEG_WriteLowNibble(unsigned char port,unsigned char value)
{
	DIO_WriteLowPins(port,0,value);
	DIO_WriteLowPins(port,1,value);
	DIO_WriteLowPins(port,2,value);
	DIO_WriteLowPins(port,3,value);
}