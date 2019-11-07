#include "holberton.h"
/**
 * get_bit - print a bite with index
 * @n: number that is going to be converted
 * @index: index that will be printed
 * Return: return the byte with specific index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;
	int byte = -1;
	unsigned int count = 0;

	i = i << 63;

	if ((n == 0 && index > 0) || index > 64)
	{
		return (-1);
	}
	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	while ((i >> 1) > 0)
		i = i >> 1, count++;
	i = i << count;
	while (i > 0)
	{
		if (index == count)
		{
			(n & i) ? (byte = 1) : (byte = 0);
			break;
		}
		i = i >> 1, count--;
	}
	return (byte);
}
