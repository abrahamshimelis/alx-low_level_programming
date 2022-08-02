#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @d: address of dog
 *
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (dog_t != NULL)
	{
		free(dog_t->name);
		free(dog_t->owner);
		free(dog_t);
	}
}
