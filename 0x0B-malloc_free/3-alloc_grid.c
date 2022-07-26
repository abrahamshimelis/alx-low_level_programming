#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to 2d array of integers
 * @width: columns of array
 * @height: row of array
 *
 * Return: address of a 2D array on success, NULL if width or
 * height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;

	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i; j++)
				free(arr[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
