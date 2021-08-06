/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 07:22:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/ 


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_
void DIO_SetPinDir (unsigned char port,unsigned char pin, unsigned char dir);
void DIO_WritePin (unsigned char port,unsigned char pin, unsigned char val);
void DIO_TogglePin (unsigned char port,unsigned char pin);
unsigned char DIO_ReadPin (unsigned char port,unsigned char pin);
void DIO_SetPortDir (unsigned char port,unsigned char dir);
void DIO_WritePort (unsigned char port,unsigned char val);
void DIO_TogglePort (unsigned char port);
unsigned char DIO_ReadPort (unsigned char port);
void DIO_EnablePullUp (unsigned char port,unsigned char pin, unsigned char enable);
void DIO_WriteHighNibble (unsigned char port,unsigned char value);
void DIO_WriteLowNibble (unsigned char port,unsigned char value);
void DIO_WriteHighPins (unsigned char port,unsigned char pin, unsigned char value);
void DIO_WriteLowPins (unsigned char port,unsigned char pin, unsigned char value);
#endif /* DIO_INTERFACE_H_ */