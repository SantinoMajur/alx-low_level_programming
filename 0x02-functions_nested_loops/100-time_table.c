#include "main.h"
/**
 * print_times_table - prints a time table
 * @n: input
 *
 * Return: time table
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n >= 0 && n <= 15)
	{
		for (num = 0; num <= n; num++)
		{
			putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				putchar(',');
				putchar(' ');
ß
				prod = num * mult;

				if (prod <= 99)
					putchar(' ');
				if (prod <= 9)
					putchar(' ');

				if (prod >= 100)
				{
					putchar((prod / 100) + '0');
					putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					putchar((prod / 10) + '0');
				}
				putchar((prod % 10) + '0');
			}
			putchar('\n');
		}
	}
}
