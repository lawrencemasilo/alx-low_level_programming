#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 * @name: name of the dog
 * @age: dog's age
 * @owner: the owner of the dog
 * Return: p (successful) NULL (failed)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		return (NULL);
	}
	p->name = strdup(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->owner = strdup(owner);
	if (p->owner == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	p->age = age;
	return (p);
}
