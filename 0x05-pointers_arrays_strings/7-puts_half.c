#include "holberton.h"
/**
 * puts_half - Print the second half of the string
 *
 * @str: input string
 *
 * Return: Secondd half of any string
 */
void puts_half(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
