#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: address of struct dog
 * @name: name of a dog of type char
 * @age: age of dog of type float
 * @owner: owner of dog of type char
 *
 * Return: nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
