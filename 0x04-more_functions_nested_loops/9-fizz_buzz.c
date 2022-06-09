#include <stdio.h>
#include <stdlib.h>
/**
 * main - print numbers from 1 to 100 followed by a newline
 * multiples of 3 print Fizz instead of number
 * multiples of 5 print Buzz
 * multiples of both 3 and 5 print FizzBuzz
 *
 * Return: Always 0
 */
int main(void)
{
	int 1;
	char fz[] = "Fizz";
	char bz[] = "Buzz";
	char fbz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s ", bz);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fbz);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", fz);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", bz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
