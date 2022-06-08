#include <stdio.h>
#include "main.h"
/**
 * main - prints characters _putchar
 * Return: (0) always
 */
int main(void)
{
	int i;
	char myChar[9] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(myChar[i]);
	}
	putchar('\n');
	return (0);
}
