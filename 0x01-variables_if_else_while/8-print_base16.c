#include <stdio.h>
/**
 * main - prints numbers of base16 in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	int i;
	char j;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (j = 'a'; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
