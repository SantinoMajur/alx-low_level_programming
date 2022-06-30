#include "main.h"
/**
 * sqrt_root - find square root of a number
 * @i: input to find sqrt
 * @r: square root
 *
 * Return: square root or -1
 */
int sqrt_root(int i, int r)
{
	if ((r * r) == i)
	{
		return (r);
	}
	else if (r == (i / 2))
	{
		return (-1);
	}
	return (sqrt_root(i, r + 1));
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number input
 *
 * Return: square root of a number
 */
int _sqrt_recursion(int n)
{
	int r;

	r = 0;
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (sqrt_root(n, r));
}
