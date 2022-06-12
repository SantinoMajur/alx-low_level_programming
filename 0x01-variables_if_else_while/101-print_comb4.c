#include <stdio.h>
/**
 * main - prints different possible combinations of three digits
 *
 * Return: always 0
 */
int main(void)
{
	int i, j, k;

	i = 0;

	while (i < 8)
	{
		j = i + 1;

		while (j < 9)
		{
			k = j + 1;

			while (k < 10)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				k++;
				if ((i == 7) && (j == 8) && (k == 9))
					continue;
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
