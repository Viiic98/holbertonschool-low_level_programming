#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Create an array using malloc
 * fill an array with a input value
 *
 * @size: size of the array
 * @c: value that will be asign
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(c));

	for (i = 0; i < size; i++)
		a[i] = c;

	a[i] = '\0';
	return (a);
}
