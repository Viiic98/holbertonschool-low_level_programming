#include "holberton.h"
/**
 * get_bit - print a bite with index
 * @n: number that is going to be converted
 * @index: index that will be printed
 * Return: return the byte with specific index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1, count = 0, flag;
	int byte;

	if (index > 64)
		return (-1);
	if (n == 0 && index > 0)
		return (-1);
	i = i << 63;
	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	flag = i;
	while (i >> 1 != 0)
	{
		count++, i = i >> 1;
	}
	i = flag;
	while (i > 0)
	{
		if (count == index)
			break;
		i = i >> 1, count--;
	}
	if (n & i)
		byte = 1;
	else
		byte = 0;

	return (byte);
}
