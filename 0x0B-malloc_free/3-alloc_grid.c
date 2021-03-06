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
	int **a, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < height; j++)
			a[i][j] = 0;
	}

	return (a);
}
