#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of a string as an integer value
 */
int _strlen(char *s)
{
	int i = 1, n = 0;
	char myLength = s[0];

	while (myLength != '\0')
	{
		n++;
		myLength = s[i++];
	}
	return (n);
}
