/**********************************************************************************************/
/* Author       : Mostafa Zween                                                               */
/* Date         : 31/7/2021 07:14:30 AM                                                       */
/* version      : 01                                                                          */
/**********************************************************************************************/


   
#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

        /*       REGISTERS ADDRESSES FOR Port A        */

#define PORTA                 *((volatile unsigned char*)(0x003B))
#define DDRA                  *((volatile unsigned char*)(0x003A))
#define PINA                  *((volatile unsigned char*)(0x0039))


        /*       REGISTERS ADDRESSES FOR Port B        */

#define PORTB                 *((volatile unsigned char*)(0x0038))
#define DDRB                  *((volatile unsigned char*)(0x0037))
#define PINB                  *((volatile unsigned char*)(0x0036))


        /*       REGISTERS ADDRESSES FOR Port C        */

#define PORTC                 *((volatile unsigned char*)(0x0035))
#define DDRC                  *((volatile unsigned char*)(0x0034))
#define PINC                  *((volatile unsigned char*)(0x0033))

       /*       REGISTERS ADDRESSES FOR Port D        */

#define PORTD                 *((volatile unsigned char*)(0x0032))
#define DDRD                  *((volatile unsigned char*)(0x0031))
#define PIND                  *((volatile unsigned char*)(0x0030))


#endif 
