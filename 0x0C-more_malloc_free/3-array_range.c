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

	if (min == max)
		n = 2;
	else
	n = (max - min) + 1;

	a = malloc(n * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < n; i++, min++)
	{
		a[i] = min;
	}

	return (a);
}
