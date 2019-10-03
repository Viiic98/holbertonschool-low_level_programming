#include "holberton.h"
/**
 * rot13 - Function that encode with rot13
 *
 * @s: String that will be encoded
 *
 * Return: string that was encoded
 */
char *rot13(char *s)
{
	int i, j;
	char e1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char e2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[i] == e1[j])
			{
				s[i] = e2[j];
			}
		}
	}
	return (s);
}
