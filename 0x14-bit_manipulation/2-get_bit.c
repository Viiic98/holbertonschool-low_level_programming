#include "holberton.h"
/**
 * get_bit - print a bite with index
 * @n: number that is going to be converted
 * @index: index that will be printed
 * Return: return the byte with specific index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;
	int byte;

	if (index > 64)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);
	i = n >> index;
	if (n & i)
		byte = 1;
	else
		byte = 0;

	return (byte);
}
