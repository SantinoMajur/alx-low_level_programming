#include "main.h"
/**
 * positive_or_negative - checks and prints if the number is positive or negative
 * @i: holds the number
 *
 * Return: is positive and prints if i > 0, is zero if i == 0. otherwise is negative
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
