#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: NULL and newDog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	newDog->age = age;
	return (newDog);
}
