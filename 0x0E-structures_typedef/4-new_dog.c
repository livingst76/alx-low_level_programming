#include "dog.h"
#include <stdlib.h>

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
	dog_t *new_dog;
	char *nm, *ow;
	int i, len1 = 0, len2 = 0;

	while (name[len1])
		len1++;
	nm = malloc(len1 + 1);
	if (!nm)
	{
		free(nm);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		nm[i] = name[i];
	nm[i] = '\0';
	while (owner[len2])
		len2++;
	ow = malloc(len2 + 1);
	if (!ow)
	{
		free(ow);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		ow[i] = owner[i];
	ow[i] = '\0';
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(nm);
		free(ow);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = nm;
	new_dog->age = age;
	new_dog->owner = ow;
	return (new_dog);
}
