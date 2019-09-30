#include "holberton.h"
/**
 * swap_int - Swap the value from a pointer
 *
 * @a: First variable
 * @b: Second variable
 *
 * Return: Change the value for two variables
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
