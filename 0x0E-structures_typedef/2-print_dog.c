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
	printf("Name: %s\n", (*d).name);
	printf("Age: %.1f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
