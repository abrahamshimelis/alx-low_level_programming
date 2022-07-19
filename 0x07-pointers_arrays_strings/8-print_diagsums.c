#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of 
 * the two diagonals of a square matrix of integers
 * @a: address of square
 * @size: size of square
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;

	while (i < size)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
