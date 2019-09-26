#include "holberton.h"
/**
 * print_number - Function for display integers
 *
 * @n: input variable
 *
 * Return:
 */
void print_number(int n)
{
	int size, a, i, k;

	size = 0;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}

	a = n;
	k = 1;

	while (a != 0)
	{
		a = a / 10;
		size++;
		k = k * 10;
	}


	if (n != 0)
	{
		for (i = 0; i < size; i++)
		{
			n = n %  k;
			k = k / 10;
			_putchar(n / k + '0');
		}
	}
	else
	{
		_putchar('0');
	}
}
