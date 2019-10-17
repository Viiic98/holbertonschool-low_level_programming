#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - Allocate memory and initialize in 0
 *
 * @nmemb: size of array
 * @size: Data type
 *
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		a[i] = 0;

	return (a);
}
