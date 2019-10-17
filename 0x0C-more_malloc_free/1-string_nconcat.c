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
	int i;
	unsigned int j, len;

	len = 0;

	while (s1[len] != '\0')
		len++;

	len += n;

	a = malloc(len * sizeof(char) + 1);

	j = i = 0;
	while (s1[j] != '\0')
	{
		a[i] = s1[j];
		i++, j++;
	}
	j = 0;
	while (j < n)
	{
		a[i] = s2[j];
		i++, j++;
	}
	a[i] = '\0';

	return (a);
}
