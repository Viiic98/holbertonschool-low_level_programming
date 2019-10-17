#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Create an array of integers
 *
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *a, i, n;

	if (min > max)
		return (NULL);

	n = max - min;

	a = malloc(n * sizeof(int) + 1);
	if (a == NULL)
		return (NULL);

	for (i = 0; i <= n; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
