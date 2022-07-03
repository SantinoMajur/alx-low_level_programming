#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimun coins to change money
 * @argc: argument value
 * @argv: argument vector array
 *
 * Return: success 0, Error 1 followed by a new line
 */
int main(int argc, char *argv[])
{
	int arr[5] = {25, 10, 5, 2, 1}
	int sum, num;

	sum = 0;
	num = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (num > 0)
	{
		if ((num - arr[0]) >= 0)
			num = num - arr[0], sum++;
		else if ((num - arr[1]) >= 0)
			num = num - arr[1], sum++;
		else if ((num - arr[2]) >= 0)
			num = num - arr[2], sum++;
		else if ((num - arr[3]) >= 0)
			num = num - arr[3], sum++;
		else if (num >= arr[4])
			num = num - arr[4], sum++;
	}
	printf("%d\n", sum);
	return (0);
}
