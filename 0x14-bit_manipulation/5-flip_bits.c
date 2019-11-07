#include "holberton.h"
/**
 * flip_bits - function that find bytes that need to be fliped
 * to convert the first number to second number
 * @n: first number
 * @m: second number
 * Return: number of bytes that need to be fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 1;
	unsigned int bytes = 0;

	i = i << 63;

	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	n = n ^ m;
	while (i > 0)
	{
		if (n & i)
			bytes++;
		i = i >> 1;
	}
	return (bytes);
}
