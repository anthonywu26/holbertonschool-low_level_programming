#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - create a dog creature, strings copied
 * @name: pointer to string woth name
 * @age: age of dog
 * @owner: pointer to string woth owner
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname, *newowner;
	int len_name, len_owner, i;

	len_name = _strlen(name);
	len_owner = _strlen(owner);

	newdog = malloc(sizeof(*newdog));
	newname = malloc(len_name + 1);
	newowner = malloc(len_owner + 1);
	if (!newdog || !newname || !newowner)
	{
		free(newdog);
		free(newname);
		free(newowner);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		newname[i] = name[i];

	for (i = 0; i <= len_owner; i++)
		newowner[i] = owner[i];

	newdog->name = newname;
	newdog->owner = newowner;
	newdog->age = age;

	return (newdog);
}

/**
 * _strlen - returns the length of a string
 *@s: pointer to a string
 *Return: integer length of string
 */
int _strlen(char *s)
{
	int length;

	length = 0;

	while (*s++ != '\0')
	{
		length++;
	}

	return (length);
}
