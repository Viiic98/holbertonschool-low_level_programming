#include "holberton.h"
/**
 * print_last_digit - Is the function for display the last digit of a number
 *
 * @n: The input variable
 *
 * Return: Print the last digit and return the valor of this
 */

int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	else
	{
		last = last;
	}

	_putchar(last + '0');

	return (last);
}
