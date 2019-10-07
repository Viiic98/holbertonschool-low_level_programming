#include "holberton.h"
/**
 * _strstr - print after any word
 *
 * @haystack: string
 * @needle: string condition
 *
 * Return: Adress of the string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	j = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[j])
		{
			j++;
			if (haystack[i] == haystack[i + 1])
			{
				i = i + 1;
			}
			if (needle[j] == '\0')
			{
				return (haystack + (i - (j - 1)));
			}
		}
		else
		{
			j = 0;
		}
		i++;
	}

	return (0);
}
