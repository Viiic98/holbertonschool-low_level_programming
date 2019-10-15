#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Creating a multiple array
 *
 * @width: rows
 * @height: colums
 *
 * Return: pointer to the address
 */
int **alloc_grid(int width, int height)
{
	int **a, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = calloc(width, sizeof(int *) * width);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = calloc(height, height * sizeof(int));
		if (a[i] == NULL)
			return (NULL);
	}
	return (a);
}
