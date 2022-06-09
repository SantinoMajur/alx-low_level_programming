#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day, 24 hour clock
 * 
 * nested for loop breaks before passing 24:00
 * Return: 24 hour clock line by line
 */
void jack_bauer(void)
{
	int myHrs, myMins;

	for (myHrs = 0; myHrs < 24; myHrs++)
	{
		for (myMins = 0; myMins < 60; myMins++)
		{
			_putchar((myHrs / 10) + '0');
			_putchar((myHrs % 10) + '0');
			_putchar(':');
			_putchar((mulyMins / 10) + '0');
			_putchar((myMins % 10) + '0');
			_putchar('\n');
		}
	}
}
