#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("wieew", 3.5, "kew");
	if (!my_dog)
	{
		printf("Error\n");
		exit(98);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);
	return (0);
}
