#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string to concatenated
 * @s2: second string to be concatenated
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *myconcat;
	int i, j, n;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] || s2[i])
	{
		n++;
		i++;
	}
	myconcat = malloc(sizeof(char) * n);
	if (myconcat == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		myconcat[j++] = s1[i];
	for (i = 0; s2[i]; i++)
		myconcat[j++] = s2[i];
	return (myconcat);
}
