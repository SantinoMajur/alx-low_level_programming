#include "main.h"
/**
 * alloc_grid - returns pointer to 2 dimensional array of integers
 * @width: width of grid
 * @height: height of grid
 *
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	arr = (int **) malloc(sizeof(int *) * height);
	if (arr != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = (int *) malloc(sizeof(int) * width);
			if (arr[i] != NULL)
			{
				for (j = 0; j < width; j++)
					arr[i][j] = 0;
			}
			else
			{
				for (i = 0; i >= 0; i--)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
