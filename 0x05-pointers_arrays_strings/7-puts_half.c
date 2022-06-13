#include "main.h"
/**
 * puts_half - prints half of a string followed by a newline
 * @str: string input
 *
 * Return: half of string
 */
void puts_half(char *str)
{
	int i, j, n;

	n = 0;

	for (i = 0; str[i] != '\0'; i++)
		n++;
	n = (n / 2);

	if ((n % 2) == 1)
		j = ((n + 1) / 2);
	for (i = j; str[i] != '\0'; i++)
		putchar(str[i]);
	putchar('\n');
}
