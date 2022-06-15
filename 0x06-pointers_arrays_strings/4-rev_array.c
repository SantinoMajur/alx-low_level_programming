#include "main.h"
/**
 * reverse_array - reverses the content of an array integers
 * @a: first input
 * @n: second inpt
 *
 * Return: n number of arrays
 */
void reverse_array(int *a, int n);
{
	int i, j = 0;

	n = n - 1;
	while (j < n)
	{
		i = *(a + j);
		*(a + j) = *(a + n);
		*(a + n) = i;
		j++;
		n--;
	}
}
