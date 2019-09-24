#include "holberton.h"
/**
 * print_sign - Entry with n
 *
 * @n: Input variable
 *
 * Return: The sign for the input number
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
