#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: holds signs of a number
 *
 * Return: 1 if n > 0 else 0 if n = 0. otherwise -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (0);
		putchar(n + '+');
	} else if (n == 0)
	{
		return (1);
		putchar(n + '0');
	} else if (n < 0)
	{
		return (-1);
		putchar(n + '-');
	} else
	{
		putchar('\n');
	}
}
