#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free previously allocated memories
 *
 * @d: pointer to struct of memories to be freed.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
