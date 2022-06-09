#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: holds input
 *
 * Return: diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 0;
		while (i <= n)
		{
			j = 1;
			while (j < i)
			{
				putchar(' ');
				j++;
			}
			putchar('\\');
			putchar('\n');
			i++;
		}
	}
}
