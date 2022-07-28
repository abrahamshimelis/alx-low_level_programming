#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: size of memory as positive integer
 *
 * Return: a pointer to the allocated memory on success,
 * if malloc fails, return 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
