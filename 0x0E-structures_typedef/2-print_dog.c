#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: address of strcut dog
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
