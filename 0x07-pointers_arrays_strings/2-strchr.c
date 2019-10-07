#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - Localizate a character in any string
 *
 * @s:
 * @c:
 *
 * Return:
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
		return NULL;
	}
	return (s + i);
}
