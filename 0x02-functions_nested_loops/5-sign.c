#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: holds the signs of a number to be printed
 *
 * Return: 1 if n > 0 else 0 if n = 0. otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar('0');
		return (0);
	} else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (n);
}
