#include "holberton.h"
/**
 * _memset - fill an array with an specific size
 *
 * @s: Array that will be changed
 * @b: String that will be added
 * @n: numbers of places that will be changed
 *
 * Return: The first array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
