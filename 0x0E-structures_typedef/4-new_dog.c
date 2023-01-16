#include <stdlib.h>
#include "dog.h"
#include <string.h>

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
	char *dog_name, *dog_owner;


	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog_name = malloc(sizeof(name));
	if (dog_name == NULL)
	{
		free(dog_name);
		return (NULL);
	}

	dog_owner = malloc(sizeof(owner));
	if (dog_owner == NULL)
	{
		free(dow_owner);
		return (NULL);
	}

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);
	dog->name = dog_name;
	dog->age = age;
	dog->owner = dog_owner;

	return (dog);
}
