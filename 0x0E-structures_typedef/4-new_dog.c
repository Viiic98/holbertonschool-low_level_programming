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
	{
		free(new);
		return (NULL);
	}
	c_owner = malloc(sizeof(char) * l_o + 1);
	if (c_owner == NULL)
	{
		free(new);
		free(c_name);
		return (NULL);
	}
	for (i = 0; i < l_n; i++)
	{
		c_name[i] = name[i];
	}
	c_name[i] = '\0';
	for (i = 0; i < l_o; i++)
	{
		c_owner[i] = owner[i];
	}
	c_owner[i] = '\0';
	(*new).name = c_name;
	(*new).age = age;
	(*new).owner = c_owner;

	return (new);
}
