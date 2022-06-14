#include <stdio.h>
/**
 * main - computes and prints the sum of multiples of 3 or 5
 *
 * Return: always 0
 */
int main(void)
{
	int mul3, mul5, sum, i;

	mul3 = 0;
	mul5 = 0;
	sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			mul3 += i;
		}
		else if ((i % 5) == 0)
		{
			mul5 += i;
		}
	}
	sum = mul3 + mul5;
	printf("%d\n", sum);
	return (0);
}
