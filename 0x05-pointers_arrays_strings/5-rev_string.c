#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - Printing a string in reverse
 *
 * @s: Input string
 *
 * Return: The sting and its reverse
 */
void rev_string(char *s)
{
	int c, i;
	char w[500];

	i = 0;
	c = 0;

	while (s[i] != '\0')
	{
		w[i] = s[i];
		i++;
	}
	i--;

	while (w[i] != '\0')
	{
		s[c] = w[i];
		i--;
		c++;
	}
}
