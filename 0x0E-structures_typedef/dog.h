#ifndef DOG_H
#define DOG_H

/**
 * struct dog - details of a dog
 *
 * @name: name of the dog
 * @owner: owner if the dog
 * @age: the dog's age
 *
 * Decription: Complete data of a dog and details of it's owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - new type dog_t as a new name for the type struct dog.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
