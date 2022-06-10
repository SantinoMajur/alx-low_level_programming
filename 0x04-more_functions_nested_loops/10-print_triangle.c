#include "main.h"
/**
 * print_triangle - a function that prints triangle followed by a newline
 * @size: size of the triangle
 * Return: triangles of '#' characters
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1) i++)
		{
			for (j = 0; j <= i; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
