#include "main.h"
/**
 * *_strncat - concatenates two strings using most n bytes from src
 * @dest: first input
 * @src: second input
 * @n: third input
 *
 * Return: string pointer
 */
char *_strncat(char *dest, char *src, int n)
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
