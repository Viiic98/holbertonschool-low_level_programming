#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - Checking the malloc
 *
 * @b: type of data * number of data
 *
 * Return: The pointer or 98 if is null
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);

	return (a);
}
