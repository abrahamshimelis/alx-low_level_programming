#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a data type of dog
 * @name: name of a dog of type char
 * @age: age of a dog of type float
 * @owner: owner of a dog of type char
 *
 * Description: this structure name dog has three variables named
 * name, age, owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
