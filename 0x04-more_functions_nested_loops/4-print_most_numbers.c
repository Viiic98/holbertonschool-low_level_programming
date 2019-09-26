#include "holberton.h"
/**
 * print_most_numbers - Function that display with exceptions
 *
 * Return: The numbers with any exceptions
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
