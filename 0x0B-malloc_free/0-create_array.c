#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars, and initializes
 * it with a specific char
 * @size: size of array
 * @c: initializing character
 *
 * Return: Null if size is 0 or malloc fails,
 * the pointer otherwise
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
		return (p);
	}
	else
		return (NULL);
}
