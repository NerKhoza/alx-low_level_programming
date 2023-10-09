#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_dog - function that frees dogs
 * @d: string of the dog
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
