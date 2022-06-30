#include "main.h"
/**
 * factorial - returns factorial of any given number
 * @n: integer to get the factorial
 *
 * Return: factorial of a give number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
