#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	long num = 612852475143;

	for (i = 2; num > 1; i++)
	{
		while (num % i == 0)
		{
			printf("%d ", i);
			num = num / i;
		}
	}
	printf("\nThe largest prime factor is: %ld\n", (long)i);
	return (0);
}
