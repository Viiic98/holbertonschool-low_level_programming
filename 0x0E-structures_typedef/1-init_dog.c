#include "dog.h"

/**
 * init_dog - initialize variable of type structure
 * @d: address of the structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing, only initialize
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
