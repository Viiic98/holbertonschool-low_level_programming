#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Localizate a character in any string
 *
 * @s: pointer to string
 * @c: character that will be searched in the string
 *
 * Return: address of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	while (s[i] != '\n')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}
	if (s[i] == '\0')
	{
		return (NULL);
	}
	return (s + i);
}
