#include "dog.h"
#include<stdio.h>

/**
 * print_dog - prints data about the dog
 * @d: pointer to the dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	printf("Name: %s\n"
		"Age: %f\n"
		"Owner: %s\n",
		(d->name) ? d->name : "(nil)",
		(d->age) ? d->age : 0.0,
		(d->owner) ? d->owner : "(nil)"
	);
}
