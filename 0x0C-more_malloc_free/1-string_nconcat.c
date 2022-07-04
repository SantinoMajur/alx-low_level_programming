#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: index bytes
 *
 * Return: character pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int sz1, sz2, i;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	sz1 = 0;
	while (s1[sz1] != '\0')
		sz1++;
	sz2 = 0;
	while (s2[sz2] != '\0')
		sz2++;
	if (n > sz2)
	{
		n = sz2;
		p = malloc((sz1 + n + 1) * sizeof(char));
	}
	else if (p == NULL)
		return (0);
	i = 0;
	while (i < sz1)
	{
		p[i] = s1[i]
		i++;
	}
	i = 0;
	while (i < (sz1 + n))
	{
		p[i] = s2[i - sz1];
		i++;
	}
	p[i] = '\0';
	return (p);
}
