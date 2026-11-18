#include "dog.h"

/**
 * init_dog - commences dog initialisation sequence
 * @d: pointer to the dog
 * @name: pointer to string containing an identifier for the dog
 * @age: how long the initialised dog has been alive in years
 * @owner: pointer to str containing the dog's guardian, if it has one
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
