#include "main.h"
/**
 * print_rev - prints string in reverse
 * i counts to the end, k counts back
 * @s: char input
 *
 * Return: A reversed string
 */
void print_rev(char *s)
{
	int i = 0;
	int k, n;

	for (n = 0; s[n] != '\0'; n++)
	{
		i++;
	}
	for (k = (i - 1); k >= 0; k--)
	{
		putchar(s[k]);
	}
	putchar('\n');
}
