#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * linear_search - linear search algorithm
 * @array: pointer to first element in array
 * @size: size of array
 * @value: value to search
 * Return: index of the value, otherwise return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (value == array[i])
				return (i);
		}
	}
	return (-1);
}
