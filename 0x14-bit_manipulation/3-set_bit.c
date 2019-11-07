#include "holberton.h"
/**
 * set_bit - print a bite with index
 * @n: number that is going to be converted
 * @index: index that will be printed
 * Return: return the byte with specific index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);

	*n = *n + (1 << index);
	return (1);
}
