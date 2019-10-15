#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenate two strings
 *
 * @s1: firs string
 * @s2: second string
 *
 * Return: pointer to the array with the strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, len, i;
	char *a;

	if (s1[0] == '\0')
		s1 = "";
	if (s2[0] == '\0')
		s2 = "";

	len1 = len2 = 0;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	len1 *= sizeof(*s1);
	len2 *= sizeof(*s2) + 1;
	len = len1 + len2;

	a = malloc(len);

	if (!a)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (*s1 != '\0')
		{
			a[i] = *s1;
			s1++;
		}
		else
		{
			a[i] = *s2;
			s2++;
		}
	}

	return (a);
}
