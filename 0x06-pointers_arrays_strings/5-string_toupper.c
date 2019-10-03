#include "holberton.h"
/**
 * string_toupper - Function that change to uppercase
 *
 * @s: String that will be changed
 *
 * Return: The string changed
 */
char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);
}
