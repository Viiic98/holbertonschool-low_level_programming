#include "holberton.h"
#include "stdio.h"
/**
 * print_binary - convert decimal to binary
 * @n: number is going to be converted
 * Return: print the binary number
 */
void print_binary(unsigned long int n)
{
	unsigned int i = 1 << 31;

	while (i > 0)
	{
		if (n & i)
			break;
		i = i >> 1;
	}
	if (i == 0)
		_putchar('0');
	while (i > 0)
	{
		(n & i) ? _putchar('1') : _putchar('0');
		i = i >> 1;
	}
}

