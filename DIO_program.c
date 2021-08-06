/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 07:22:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/
#include "std_macro_bit.h"
#include "DIO_interface.h"
#include "DIO_private.h"
void DIO_SetPinDir (unsigned char port,unsigned char pin, unsigned char dir)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(dir==1)
		{
			DDRA|=(1<<pin);
		}
		else
		{
			DDRA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(dir==1)
		{
			DDRB|=(1<<pin);
		}
		else
		{
			DDRB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(dir==1)
		{
			DDRC|=(1<<pin);
		}
		else
		{
			DDRC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(dir==1)
		{
			DDRD|=(1<<pin);
		}
		else
		{
			DDRD&=~(1<<pin);
		}
		break;
	}
}
void DIO_WritePin (unsigned char port,unsigned char pin, unsigned char val)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(val==1)
		{
			PORTA|=(1<<pin);
		}
		else
		{
			PORTA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(val==1)
		{
			PORTB|=(1<<pin);
		}
		else
		{
			PORTB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(val==1)
		{
			PORTC|=(1<<pin);
		}
		else
		{
			PORTC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(val==1)
		{
			PORTD|=(1<<pin);
		}
		else
		{
			PORTD&=~(1<<pin);
		}
		break;
	}
}

void DIO_TogglePin (unsigned char port,unsigned char pin)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
			PORTA^=(1<<pin);
		break;
		//portB
		case 'B':
		case 'b':
		    PORTB^=(1<<pin);
		break;
		//portC
		case 'C':
		case 'c':
			PORTC^=(1<<pin);
		break;
		//portD
		case 'D':
		case 'd':
			PORTD^=(1<<pin);
		break;
	}
}

unsigned char DIO_ReadPin (unsigned char port,unsigned char pin)
{
unsigned char value=0;
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		value=((PINA&(1<<pin))>>pin);
		break;
		//portB
		case 'B':
		case 'b':
		value=((PINB&(1<<pin))>>pin);
		break;
		//portC
		case 'C':
		case 'c':
		value=((PINC&(1<<pin))>>pin);
		break;
		//portD
		case 'D':
		case 'd':
		value=((PIND&(1<<pin))>>pin);
		break;
	}
return value;
}

void DIO_SetPortDir (unsigned char port,unsigned char dir)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		DDRA=dir;
		break;
		//portB
		case 'B':
		case 'b':
		DDRB=dir;
		break;
		//portC
		case 'C':
		case 'c':
		DDRC=dir;
		break;
		//portD
		case 'D':
		case 'd':
		DDRD=dir;
		break;
	}
}
void DIO_WritePort (unsigned char port,unsigned char val)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		PORTA=val;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB=val;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC=val;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD=val;
		break;
	}
}
void DIO_TogglePort (unsigned char port)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		PORTA=~PORTA;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB=~PORTB;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC=~PORTC;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD=~PORTD;
		break;
	}
}
unsigned char DIO_ReadPort (unsigned char port)
{
unsigned char value=0;
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		value=PINA;
		break;
		//portB
		case 'B':
		case 'b':
		value=PINB;
		break;
		//portC
		case 'C':
		case 'c':
		value=PINC;
		break;
		//portD
		case 'D':
		case 'd':
		value=PIND;
		break;
	}
return value;
}
void DIO_EnablePullUp (unsigned char port,unsigned char pin, unsigned char enable)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(enable==1)
		{
			PORTA|=(1<<pin);
		}
		else
		{
			PORTA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(enable==1)
		{
			PORTB|=(1<<pin);
		}
		else
		{
			PORTB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(enable==1)
		{
			PORTC|=(1<<pin);
		}
		else
		{
			PORTC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(enable==1)
		{
			PORTD|=(1<<pin);
		}
		else
		{
			PORTD&=~(1<<pin);
		}
		break;
	}
}
void DIO_WriteLowNibble (unsigned char port,unsigned char value)
{
	value&=0x0f;
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA&=0xf0;
		PORTA|=value;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB&=0xf0;
		PORTB|=value;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC&=0xf0;
		PORTC|=value;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD&=0xf0;
		PORTD|=value;
		break;
	}
}
void DIO_WriteHighNibble (unsigned char port,unsigned char value)
{
	value<<=4;
	switch(port)
	{
		case 'A':
		case 'a':
		PORTA&=0x0f;
		PORTA|=value;
		break;
		//portB
		case 'B':
		case 'b':
		PORTB&=0x0f;
		PORTB|=value;
		break;
		//portC
		case 'C':
		case 'c':
		PORTC&=0x0f;
		PORTC|=value;
		break;
		//portD
		case 'D':
		case 'd':
		PORTD&=0x0f;
		PORTD|=value;
		break;
	}
}
void DIO_WriteHighPins (unsigned char port,unsigned char pin, unsigned char value)
{
	value<<=4;
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(read_bit(value,pin)==1)
		{
			PORTA|=(1<<pin);
		}
		else
		{
			PORTA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(read_bit(value,pin)==1)
		{
			PORTB|=(1<<pin);
		}
		else
		{
			PORTB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(read_bit(value,pin)==1)
		{
			PORTC|=(1<<pin);
		}
		else
		{
			PORTC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(read_bit(value,pin)==1)
		{
			PORTD|=(1<<pin);
		}
		else
		{
			PORTD&=~(1<<pin);
		}
		break;
	}
}
void DIO_WriteLowPins (unsigned char port,unsigned char pin, unsigned char value)
{
	switch(port)
	{
		//portA
		case 'A':
		case 'a':
		if(read_bit(value,pin)==1)
		{
			PORTA|=(1<<pin);
		}
		else
		{
			PORTA&=~(1<<pin);
		}
		break;
		//portB
		case 'B':
		case 'b':
		if(read_bit(value,pin)==1)
		{
			PORTB|=(1<<pin);
		}
		else
		{
			PORTB&=~(1<<pin);
		}
		break;
		//portC
		case 'C':
		case 'c':
		if(read_bit(value,pin)==1)
		{
			PORTC|=(1<<pin);
		}
		else
		{
			PORTC&=~(1<<pin);
		}
		break;
		//portD
		case 'D':
		case 'd':
		if(read_bit(value,pin)==1)
		{
			PORTD|=(1<<pin);
		}
		else
		{
			PORTD&=~(1<<pin);
		}
		break;
	}
}