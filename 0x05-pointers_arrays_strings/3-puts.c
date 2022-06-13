#include "main.h"
/**
 * _puts - prints a string followed by a newline
 * @str: char input
 *
 * Return: a string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
