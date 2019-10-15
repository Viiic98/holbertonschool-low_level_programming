#include "holberton.h"
#include <stdlib.h>
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
	int i, j, len, k;
	char *a;

	i = 0;
	j = 0;

	if (*s1 == '\0')
		s1 = "";
	if (*s2 == '\0')
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	len = i + j + 1;

	a = malloc(len * sizeof(char));

	for (k = 0; k < len - 1; k++)
	{
		if (*s1 != '\0')
		{
			a[k] = *s1;
			s1++;
		}
		else
		{
			a[k] = *s2;
			s2++;
		}
	}
	a[k] = '\0';
	return (a);
}
