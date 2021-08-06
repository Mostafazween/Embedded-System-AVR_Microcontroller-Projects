
/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 06/8/2021 09:16:10 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#define F_CPU 8000000UL
#include <util/delay.h>
#include "BCDSEVENSEG_interface.h"
#include "LED_interface.h"

int main(void)
{
    BCDSEVENSEG_InitLowNibble('C');
	BCDSEVENSEG_InitHighNibble('C');
	LED_Init('A',0);  //RED
	LED_Init('A',1);  //YELLOW
	LED_Init('A',2);  //GREEN
	signed char counter1;
	signed char counter2;
    while (1) 
    {
		BCDSEVENSEG_WriteLowNibble('C',3);
		BCDSEVENSEG_WriteHighNibble('C',0);
		LED_On('A',0);  // RED ON
		LED_Off('A',1);  // YELLOW ON
		LED_Off('A',2);  // GREEN ON
		_delay_ms(1000);
		for (counter1=2;counter1>=0;counter1--)
		{
			BCDSEVENSEG_WriteLowNibble('C',counter1);
			for (counter2=9;counter2>=0;counter2--)
			{
				BCDSEVENSEG_WriteHighNibble('C',counter2);
				_delay_ms(1000);
			}
		}
		LED_Off('A',0);   //RED OFF
		LED_On('A',1);    //YELLOW ON
		LED_Off('A',2);   //GREEN OFF
		BCDSEVENSEG_WriteLowNibble('C',0);
		for (counter2=5;counter2>=0;counter2--)
		{
			BCDSEVENSEG_WriteHighNibble('C',counter2);
			_delay_ms(1000);
		}
		LED_Off('A',0);   //RED OFF
		LED_Off('A',1);    //YELLOW OFF
		LED_On('A',2);     //GREEN ON
		BCDSEVENSEG_WriteLowNibble('C',3);
		BCDSEVENSEG_WriteHighNibble('C',0);
		_delay_ms(1000);
		for (counter1=2;counter1>=0;counter1--)
		{
			BCDSEVENSEG_WriteLowNibble('C',counter1);
			for (counter2=9;counter2>=0;counter2--)
			{
				BCDSEVENSEG_WriteHighNibble('C',counter2);
				_delay_ms(1000);
			}
		}
		
    }
}

