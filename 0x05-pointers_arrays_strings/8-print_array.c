#include "main.h"
/**
 * print_array - prints an array of integers followed by a newline
 * @a: pointer int input, first input
 * @n: second int input
 *
 * Return: return an array
 */
void print_array(int *a, int n)
{
	int i;

	for (i  = 0; i < (n - 1); i++)
	{
		printf("%d ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}
	printf("\n");
}
