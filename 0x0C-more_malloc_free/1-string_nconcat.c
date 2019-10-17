#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Concatenate two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of character to second string
 *
 * Return: pointer to string concatenated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i, len, len2;

	len = len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0')
		len++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		len += len2;
	else
		len += n;

	a = malloc(len * sizeof(char) + 1);
	if (a == NULL)
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
	a[i] = '\0';
	return (a);
}
