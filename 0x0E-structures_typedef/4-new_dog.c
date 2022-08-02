#include <stdlib.h>
#include "dog.h"

char *_strcpy(char *src, char *dest);
int _strlen(char *s);

/**
 * _strlen - compute length of string
 * @s: address of string
 *
 * Return: length of string on success, NULL otherwise
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s && s[i] != '\0')
	{
		i++;
	}

	return (i);
}
/**
 * _strcpy - copies string from source to destination
 * @src: address of source string
 * @dest: address of destination string
 *
 * Return: address of of destination string
 */

char *_strcpy(char *src, char *dest)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
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
	dog_t *my_dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	_strcpy(name, my_dog->name);
	_strcpy(owner, my_dog->owner);
	my_dog->age = age;

	return (my_dog);
}
