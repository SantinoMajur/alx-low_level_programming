#include "main.h"
/**
 * create_array - Creates an array of chars and init it with specific char
 * @size: unsigned int input
 * @c: Character input
 *
 * Return: NULL if size = 0 | pointer to array | NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *mychar;

	if (size == 0)
		return (NULL);
	mychar = malloc(size * sizeof(char));
	if (mychar == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		mychar[i] = c;
		i++;
	}
	return (mychar);
}
