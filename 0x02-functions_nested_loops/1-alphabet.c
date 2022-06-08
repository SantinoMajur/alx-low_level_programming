#include "main.h"
/**
 * print_alphabet - prints alphabets in lowercase
 * Return: void
 */
void print_alphabet(void)
{
	char myChar;

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
		putchar(myChar);
	}
	putchar('\n');
}
