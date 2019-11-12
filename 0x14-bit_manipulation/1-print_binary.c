#include "holberton.h"
/**
 * print_binary - convert decimal to binary
 * @n: number is going to be converted
 * Return: print the binary number
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	i = i << 63;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	while (i > 0)
	{
		(n & i) ? _putchar('1') : _putchar('0');
		i = i >> 1;
	}
}

