#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array, using malloc
 * @nmemb: elements of an array as positive integer
 * @size: size of bytes of each as positive integer
 *
 * Return: NULL if nmemb or size is 0 and when malloc fails,
 * otherwise return a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	/**
	 * if nmemb or size = 0 -> return NULL
	 * create new memory loc = size * nmemb of bytes
	 * if malloc fails -> return NULL
	 * no-> return address of pointer
	 */

	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc((size * nmemb));
	if (p == NULL)
		return (NULL);
	return (p);
}
