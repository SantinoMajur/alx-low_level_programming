#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer input
 *
 * Return: int
 */
void print_number(int n)
{
	int i;

	if (n < 0)
	{
		i = -n;
		putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
		print_number(i / 10);
	putchar((i % 10) + '0');
}
