#include "holberton.h"
#include <stdio.h>
/**
 * leet - Function that encode a string
 *
 * @s: String that will be encode
 *
 * Return: The string encoded
 */
char *leet(char *s)
{
	int i, j;
	char e1[] = "aAeEoOtTlL";
	char e2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == e1[j])
			{
				s[i] = e2[j];
			}
		}
	}

	return (s);
}
