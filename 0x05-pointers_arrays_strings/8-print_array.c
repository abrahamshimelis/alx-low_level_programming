#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 * separated by comma, followed by a space, numbers displayed
 * in the same order as they are stored in the array
 * followed by a new line
 * @a: array pointer
 * @n: number of elements of array to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
