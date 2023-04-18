#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free dog
 * @d: pointer to dog
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d->age);
		free(d);
	}
}
