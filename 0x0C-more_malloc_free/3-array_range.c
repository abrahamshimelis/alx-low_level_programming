#include <stdlib.h>

/**
 * *array_range - create an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: a pointer to newly created array on success,
 * if min > max, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	/**
	 * min > max, yes-> return NULL
	 * malloc (sizeof(int) * (max - min + 1))
	 * malloc fails, yes-> return NULL
	 * fill memory with values
	 * return address of newly pointer
	 */

	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
		p[i] = min + i;
	return (p);
}
