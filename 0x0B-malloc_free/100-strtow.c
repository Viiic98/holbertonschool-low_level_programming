#include "holberton.h"
#include <stdlib.h>
/**
 * strtow -
 *
 * @str:
 *
 * Return:
 */
char **strtow(char *str)
{
	char *a, *b, s;
	int i, len;

	if (str == NULL || str == "")
		return (NULL);

	str = _space(str);


	len = s = 0;
	while (str[len] != "\0")
	{
		if (str[len + 1] == " ")
		{
			str = _space(str + 1);
			s++;
		}
		len++;
	}

	for (i = 0, i < s; i++)
	{
		a[i] = malloc();
	}

	return (a);
}
char _space(char *s1)
{
	if (*s1 == " ")
	{
		if (*(s1 + 1) == " ")
			return (_space(s1 + 1));
		else
			return (s1 + 1);
	}

	return (s1);
}
