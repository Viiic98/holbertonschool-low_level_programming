#include "holberton.h"
/**
 * _print_rev_recursion - Printing in reverse
 *
 * @s: address of the first char of string
 *
 * Return: The string in reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
