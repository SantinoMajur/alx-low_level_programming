#include "main.h"
/**
 * *_memset - Fills memory with a constant byte
 * @s: memory space to fill
 * @b: constant of byte
 * @n: bytes of the memory area
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
