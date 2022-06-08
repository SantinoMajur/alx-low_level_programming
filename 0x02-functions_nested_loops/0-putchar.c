#include "main.h"
/**
 * print_putchar - prints characters _putchar
 * Return: (0) always
 */
int print_putchar(void)
{
	int i;
	char myChar[9];

	for (i = 0; i < 8; i++)
	{
		_putchar(myChar[i]);
	}
	_putchar('\n');
	return (0);
}
