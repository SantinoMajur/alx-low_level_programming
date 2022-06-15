#include "main.h"
/**
 * reverse_array - reverses the content of an array integers
 * @a: first input
 * @n: second inpt
 *
 * Return: void
 */
void reverse_array(int *a, int n);
{
	int i = 0, j;

	n = n - 1;
	while (i < n)
	{
		j = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = j;
		i++;
		n--;
	}
}
