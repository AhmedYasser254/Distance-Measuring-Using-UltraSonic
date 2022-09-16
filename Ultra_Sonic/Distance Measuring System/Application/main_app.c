/**********************************************************************
 *
 * File Name : Main App.c
 *
 * Description : Source File For The UltraSonic Application
 *
 * Author : Ahmed Yasser
 *
 **********************************************************************/


#include "ultraSonic.h"
#include "gpio.h"
#include "std_types.h"
#include "icu.h"
#include "lcd.h"
#include <avr/io.h>

uint32 reading = 0;
int main (void)
{
	SREG |= (1<<7);

		LCD_init();
		Ultrasonic_init();
		LCD_displayStringRowColumn(0, 0,"Distance =    cm");
		while (1)
		{
			LCD_moveCursor(0,11);
			reading = Ultrasonic_readDistance();
			if(reading >= 100)
				{
					LCD_intgerToString(reading);
				}
				else
				{
					LCD_intgerToString(reading);
					LCD_displayCharacter(' ');
				}
		}
	}

