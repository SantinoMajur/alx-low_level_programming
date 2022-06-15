#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: strings
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while ((i < n) && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + 1) = '\0';
		i++;
	}
	return (dest);
}
