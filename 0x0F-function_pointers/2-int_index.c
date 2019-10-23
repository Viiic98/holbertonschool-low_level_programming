#include "function_pointers.h"
/**
 * int_index - compares an array
 *
 * @array: array that contain the values
 * @size: number of elements
 * @cmp: used for point to int functions
 * Return: the return is the index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
