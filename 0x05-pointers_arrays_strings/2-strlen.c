#include "holberton.h"
/**
 * _strlen - What is the lenght of a string
 *
 * @s: input string
 *
 * Return: Lenght of a string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
