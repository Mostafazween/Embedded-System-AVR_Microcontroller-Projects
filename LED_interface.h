/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 02:14:30 PM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_
void LED_Init(unsigned char port,unsigned char pin);
void LED_On(unsigned char port,unsigned char pin);
void LED_Off(unsigned char port,unsigned char pin);
void LED_Toggle(unsigned char port,unsigned char pin);
unsigned char LED_ReadStatus(unsigned char port,unsigned char pin);
#endif /* LED_INTERFACE_H_ */