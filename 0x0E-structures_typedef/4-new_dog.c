#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Storing other dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: the array
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *c_name, *c_owner;
	int l_n, l_o, i;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	l_n = l_o = 0;

	/* Lenght of the name and owner */

	while (name[l_n] != '\0')
		l_n++;
	while (owner[l_o] != '\0')
		l_o++;

	/* Store the copie in memory */

	c_name = malloc(sizeof(char) * l_n + 1);
	if (c_name == NULL)
		return (NULL);
	c_owner = malloc(sizeof(char) * l_o + 1);
	if (c_owner == NULL)
		return (NULL);

	for (i = 0; i < l_n; i++)
	{
		c_name[i] = name[i];
	}
	for (i = 0; i < l_o; i++)
	{
		c_owner[i] = owner[i];
	}

	(*new).name = name;
	(*new).age = age;
	(*new).owner = owner;

	return (new);
}
