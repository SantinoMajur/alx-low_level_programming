#include "main.h"
/**
 * *_strcat - A function that concatenates two strings
 * @dest: first input
 * @src: second input
 *
 * Return: strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
