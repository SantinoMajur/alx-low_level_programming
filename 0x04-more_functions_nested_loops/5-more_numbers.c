#include "main.h"
/**
 * more_numbers - prints 10 times the number, from 0 to 14 plus a new line
 *
 * Return: 0 - 14, times 10
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if ((j >= 10))
			{
				putchar((j / 10) + '0');
			}
			putchar((j % 10) + '0');
			j++;
		}
		i++;
		putchar('\n');
	}
}
