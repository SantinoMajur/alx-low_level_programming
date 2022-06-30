#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals
 * @a: start of matrix pointer
 * @size: size of matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;
	int n = 0, e = 0;

	i = 0;
	while (i < size)
	{
		k = (i * size) + i;
		n += *(a + k);
		i++;
	}
	j = 0;
	while (j < size)
	{
		k = (j * size) + (size - 1 - j);
		e += *(a + k);
		j++;
	}
	printf("%i, %i\n", n, e);
}
