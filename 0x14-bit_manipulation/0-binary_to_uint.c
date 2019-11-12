#include "holberton.h"
/**
 * binary_to_uint - converting to decimal
 * @b: binary number
 * Return: decimal number or 0 if it fails
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i = 0, j = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;
	i--;
	while (i >= 0)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			if (b[i] == '0')
				i--, j++;
			else
			{
				dec += pow2(j);
				i--, j++;
			}
		}
		else
			return (0);
	}

	return (dec);
}
/**
 * pow2 - Elevate to 2
 * @a: how many times is elevated
 * Return: pow value
 */
unsigned int pow2(unsigned int a)
{
	unsigned int pow = 1;

	while (a > 0)
	{
		pow *= 2;
		a--;
	}
	return (pow);
}
