#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure with variables about a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
char *strcpy(char *dest, const char *src);
#endif
