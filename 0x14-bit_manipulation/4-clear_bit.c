#include "holberton.h"
/**
 * clear_bit - set a bit to zero
 * @n: number that is going to be set
 * @index: index
 * Return: 1 if works -1 if it not works
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	if (*n == 0 && index > 0)
		return (-1);
	*n = *n ^ (i << index);

	return (1);
}
