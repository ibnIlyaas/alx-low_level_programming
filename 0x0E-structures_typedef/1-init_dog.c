#include "dog.h"

/**
 * init_dog - initialize the struct dog funx
 * @d: pointer to dog
 * @name: pointer to name
 * @age: age
 * @owner: pointer to owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
