/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 02:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#include "DIO_interface.h"
void LED_Init(unsigned char port,unsigned char pin)
{
	DIO_SetPinDir(port,pin,1);
	}
void LED_On(unsigned char port,unsigned char pin)
{
	DIO_WritePin(port,pin,1);
}
void LED_Off(unsigned char port,unsigned char pin)
{
	DIO_WritePin(port,pin,0);
}
void LED_Toggle(unsigned char port,unsigned char pin)
{
	DIO_TogglePin(port,pin);
}
unsigned char LED_ReadStatus(unsigned char port,unsigned char pin)
{
	unsigned char led_status;
	led_status=DIO_ReadPin(port,pin);
	return led_status;
}