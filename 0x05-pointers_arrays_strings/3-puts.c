#include "holberton.h"
/**
 * _puts - Print the sttring with put
 *
 * @str: Input string
 *
 * Return: A complete string with putchar using pointer
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
