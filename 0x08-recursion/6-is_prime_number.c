#include "main.h"
/**
 * get_prime - gets the square root of a prime number recursively
 * @i: Number to check if prime number
 * @j: number to check against
 *
 * Return: 1 if prime, 0 otherwise
 */
int get_prime(int i, int j)
{
	if (i < 2)
		return (0);
	else if ((i % j) == 0 && j != i)
		return (0);
	else if (j == i)
		return (1);
	return (get_prime(i, j + 1));
}
/**
 * is_prime_number - returns prime number
 * @n: integer to check if it's prime number
 *
 * Return: 1 if prime or 0 otherwise
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}
