#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: name of dog as a char
 * @age: age of dog as a float
 * @owner: owner of a dog as a char
 *
 * Return: address of new dog on success, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = {.name = name, .age = age, .owner = owner };

	return (my_dog);
}
