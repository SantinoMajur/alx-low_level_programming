#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * Return: times table
 * add extra space, comma after a single digit
 */
void times_table(void)
{
	int i, j, c;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			c = (i * j);
			if ((c / 10) > 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((c % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
