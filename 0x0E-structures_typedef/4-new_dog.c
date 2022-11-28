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
	int len = 0, i;

	if(!name)
	  return (NULL);

	if (!owner)
		return (NULL);
	while (name[len])
		len++;
	nm = malloc(len + 1);
	if (!nm)
	{
		free(nm);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		nm[i] = name[i];
	nm[i] = '\0';

	len = 0;
	while (owner[len])
		len++;
	ow = malloc(len + 1);
	if (!ow)
	{
		free(nm);
		return (NULL);
	}
	for (i = 0; i < len; i++)
		ow[i] = owner[i];
	ow[i] = '\0';
	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = nm;
	new_dog->age = age;
	new_dog->owner = ow;
	return (new_dog);
}
