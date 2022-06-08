#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: holds the int value of the last digit of a number
 *
 * Return: returns the last digit of a number
 */
int print_last_digit(int n)
{
	int lastD;

	lastD = (n % 10);
	if (lastD < 0)
	{
		lastD = (-1 * lastD);
	}
	_putchar(lastD + '0');
	return (lastD);
}
