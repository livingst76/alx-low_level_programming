#ifndef MAIN_H
#define MAIN_H

/**
 * struct dog - dog's profile
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /*MAIN_H*/
