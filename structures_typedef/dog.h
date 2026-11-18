#ifndef __DOG_H_

#define __DOG_H_

/**
 * struct dog - struct representing a dog
 * @name: a identifier for this dog creature
 * @owner: the dog's guardian, if it has one
 * @age: how long this dog has been alive in years
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
