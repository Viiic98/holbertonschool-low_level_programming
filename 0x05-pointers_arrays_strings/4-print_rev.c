#include "holberton.h"
/**
 * print_rev - Printing a string in reverse
 *
 * @s: Input string
 *
 * Return:
 */
void print_rev(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	while (c >= 0)
	{
		_putchar(s[c]);
		c--;
	}
	_putchar('\n');
}
