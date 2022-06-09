#include "main.h"
/**
 * print_square - prints a square folowed by newline
 * @size: holds input for the size of square
 *
 * Return: prints newline if size <= 0
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		i = 1;
		while (i <= size)
		{
			putchar('#');
			i++;

			j = 2;
			while (j <= size)
			{
				putchar('#');
				j++;
			}
			putchar('\n');
		}
	}
}
