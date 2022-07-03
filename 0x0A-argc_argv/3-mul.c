#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed
 * @argv: argument vector
 *
 * Return: print result of mul otherwise error & returns 1
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	i = strtol(argv[1], NULL, 10);
	j = strtol(argv[2], NULL, 10);
	printf("%d\n", i * j);
	return (0);
}
