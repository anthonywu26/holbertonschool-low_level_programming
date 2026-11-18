#ifndef __DOG_H_

#define __DOG_H_

/**
 * dog_t - typedef for type struct dog
 */
typedef struct dog dog_t;

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
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
void free_dog(dog_t *d);

#endif
