#include "main.h"
/**
 * _isalpha - checks alphabets in uppercase
 * @c: - holds characters of alphabets
 *
 * Return: 1 if the character is uppercase. 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) == 0)
		return (0);
	return (1);
	putchar('\n');
}
