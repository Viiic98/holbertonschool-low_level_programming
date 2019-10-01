#include "holberton.h"
/**
 * puts2 - Function
 *
 * @str: Input variable
 *
 * Return: Every other character
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
