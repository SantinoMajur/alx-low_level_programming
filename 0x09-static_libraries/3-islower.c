#include "main.h"
/**
 * _islower - checks alphabets in lowercase
 * @c: holds characters of alphabets
 *
 * Return: 1 if the alphabet is lower. 0 otherwise
 */
int _islower(int c)
{
	if (c > 97 && c < 122)
		return (1);
	return (0);
	putchar('\n');
}
