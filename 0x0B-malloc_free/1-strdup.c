#include "main.h"
/**
 * _strdup - returns pointer to new string using malloc
 * @str: string input
 *
 * Return: on success pointer to duplicate string
 */
char *_strdup(char *str)
{
	unsigned int i, j, n;
	char *mystr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	n = i + 1;
	mystr = malloc(sizeof(char) * n);
	if (mystr == NULL)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		mystr[j] = str[j];
		j++;
	}
	return (mystr);
}
