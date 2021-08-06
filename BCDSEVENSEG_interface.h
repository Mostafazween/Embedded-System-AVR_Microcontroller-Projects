
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 05/8/2021 08:14:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#ifndef BCD_SEVEN_SEG_INTERFACE_H_
#define BCD_SEVEN_SEG_INTERFACE_H_
void BCDSEVENSEG_InitLowNibble(unsigned char port);
void BCDSEVENSEG_InitHighNibble(unsigned char port);
void BCDSEVENSEG_WriteHighNibble(unsigned char port,unsigned char value);
void BCDSEVENSEG_WriteLowNibble(unsigned char port,unsigned char value);
#endif /* BCD_SEVEN_SEG_INTERFACE_H_ */