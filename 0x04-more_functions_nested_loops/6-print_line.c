#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: holds input to print '_'
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			putchar('_');
			i++;
		}
		putchar('\n');
	}
}
