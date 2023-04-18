#include "dog.h"

/**
 * init_dog - initializes a variable type
 * @d: points to struct dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
