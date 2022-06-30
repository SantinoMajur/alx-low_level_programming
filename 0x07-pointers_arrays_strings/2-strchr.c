#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to locate
 *
 * Return: pointer to char c in string s, or null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + 1))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
