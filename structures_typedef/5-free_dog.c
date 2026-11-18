#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - sets the dogs free
 * @d: pointer to the dog to be freed
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
