#include "holberton.h"
/**
 * print_line - Function that print a line depends of the input variable
 *
 * @n: input variable
 *
 * Return: A straight line
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
