#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog (using dog_t)
 * @name: name of dog
 * @age:age of dog
 * @owner: owner of dog
 *
 * Return: pointer to dog(return value).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
