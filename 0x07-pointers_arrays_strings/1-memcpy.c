#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory to copy from
 * @n: bytes to copy
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
