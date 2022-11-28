#include "dog.h"
#include <stddef.h>

/**
 * new_dog - create profile details for a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: new_dog, pointer to new dog's profile details.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog, *p = &new_dog;
	char *nm = name, *ow = owner;

	if (!name)
		return (NULL);

	if (!owner)
	return (NULL);x

	new_dog.name = nm;
	new_dog.age = age;
	new_dog.owner = ow;

	if (!p)
		return (NULL);

	return (p);
}
