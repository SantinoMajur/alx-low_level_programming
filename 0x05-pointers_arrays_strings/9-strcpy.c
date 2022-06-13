#include "main.h"
/**
 * *_strcpy - copies a string pointed to src plus \0
 * @dest: first input
 * @src: second input
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
