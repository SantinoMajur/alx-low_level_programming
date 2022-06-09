#include "main.h"
/**
 * print_most_numbers - prints numbers from 0-9 and doesn't print 2 and 4
 *
 * Return: 1356789
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
			continue;
		putchar(i + '0');
	}
	putchar('\n');
}
