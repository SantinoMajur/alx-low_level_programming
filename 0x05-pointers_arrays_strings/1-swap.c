#include "main.h"
/**
 * swap_int - swaps the values of two integer
 * @a: first input
 * @b: second input
 *
 * Return: swapped integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
