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
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d == NULL)
		return;
	printf("Name: %s\nAge: %.1f\nOwner: %s\n", d->name, d->age, d->owner);
}
