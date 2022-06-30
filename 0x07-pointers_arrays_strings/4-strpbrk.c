#include "main.h"
/**
 * _strpbrk - search string for any set of bytes
 * @s: String to be search
 * @accept: String to locate
 *
 * Return: pointer bytes in s that matches bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
