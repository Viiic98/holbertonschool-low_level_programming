#include "holberton.h"
/**
 * _puts_recursion - Print a string
 *
 * @s: Address of the actual char
 *
 * Return: The string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
