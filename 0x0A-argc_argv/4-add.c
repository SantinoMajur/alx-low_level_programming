#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments passed
 * @argv: arguments vector
 *
 * Return: success 0, error 1 followed by new line
 */
int main(int argc, char *argv[])
{
	int i, res, j;

	i = 1;
	res = 0;
	j = 0;
	if (argc == 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (; i < argc; i++)
	{
		j = strtol(argv[i], NULL, 10);
		if (!j)
		{
			printf("Error\n");
			return (1);
		}
		res += j;
	}
	printf("%d\n", res);
	return (0);
}
