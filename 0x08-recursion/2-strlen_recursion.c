#include "holberton.h"
/**
 * _strlen_recursion - Counting
 *
 * @s: String
 *
 * Return: The lenght
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != '\0')
	{
		s++;
		i = 1 + _strlen_recursion(s);
		return (i);
	}
	return (0);
}
