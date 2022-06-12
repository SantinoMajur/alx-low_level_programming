#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - prints alphabets in lowercase followed by a newline
 *
 * Return: always 0
 */
int main(void)
{
	char myChar;

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
		putchar(myChar);
	}
	putchar('\n');
	return (0);
}
