#include "main.h"
/**
 * puts2 - prints every other character of a string followed by a newline
 * @str: string input
 *
 * Retutn: string characters
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
