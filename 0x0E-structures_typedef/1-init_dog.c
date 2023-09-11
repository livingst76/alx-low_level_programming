#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise struct dog's variable
 *
 * @d: variable to be initialised
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog's profile details
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
