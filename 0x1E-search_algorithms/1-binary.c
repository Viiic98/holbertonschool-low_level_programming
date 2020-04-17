#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * pr_array - print an array
 * @array: pointer to first element in array
 * @first: index of the first element
 * @size: size of array(index last element)
 */
void pr_array(int *array, size_t first, size_t size)
{
	printf("Searching in array: ");
	while (first < size)
	{
		printf("%d, ", array[first]);
		first++;
	}
	printf("%d\n", array[first]);
	}
/**
 * binary_search - binary search function
 * @array: pointer to first element in array
 * @size: size of array
 * @value: value to search
 * Return: index of the value, otherwise return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0, mid = 0;

	size--;
	if (array != NULL)
	{
		while (first <= size)
		{
			pr_array(array, first, size);
			mid = (first + size) / 2;

			if (array[mid] == value)
				return (mid);
			if (array[mid] < value)
			first = mid + 1;
			else
			size = mid - 1;
		}
	}
	return (-1);
}
