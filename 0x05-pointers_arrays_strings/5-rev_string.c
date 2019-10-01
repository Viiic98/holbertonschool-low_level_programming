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
	char w[] = "        ";

	i = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	c--;
	while (s[c] != '\0')
	{
		w[i] = s[c];
		i++;
		c--;
	}
	c = 0;
	while (w[c] != '\0')
	{
		s[c] = w[c];
		c++;
	}
}
