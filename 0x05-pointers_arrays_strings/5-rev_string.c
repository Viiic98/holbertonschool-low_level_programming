#include "holberton.h"
/**
 * rev_string - Printing a string in reverse
 *
 * @s: Input string
 *
 * Return: The sting and its reverse
 */
void rev_string(char *s)
{
	char a;
	int i, l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	l--;
	for (i = 0; i <= l / 2; i++)
	{
		a = s[l - i];
		s[l - i] = s[i];
		s[i] = a;
	}
}
