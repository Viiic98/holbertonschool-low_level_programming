#include "function_pointers.h"
/**
 * array_iterator - Using values of an array
 *
 * @array: array of integers that containt the values
 * @size: syze of the array
 * @action: function pointer that call the other functions
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size < 1 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
