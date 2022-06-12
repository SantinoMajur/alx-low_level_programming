#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - prints the last digit of a random number
 *
 * Return: always 0
 */
int main(void)
{
	int n, lastDigit;
	char myStr[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10);
	if (lastDigit > 5)
		printf("%s%d is %d and is greater than 5\n", myStr, n, lastDigit);
	else if (lastDigit == 0)
		printf("%s%d is %d and is 0\n", myStr, n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("%s%d is %d and is less than 6 and not 0\n", myStr, n, lastDigit);
	return (0);
}
