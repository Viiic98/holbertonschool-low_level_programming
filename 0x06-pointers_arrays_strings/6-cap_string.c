#include "holberton.h"
/**
 * cap_string - Capitalizating words
 *
 * @s: Input string
 *
 * Return: string capitalizated
 */
char *cap_string(char *s)
{
	int i, j;
	char e1[] = " \t\n,;.!?\"(){}";

	i = 0;

	while (s[i] != '\0')
	{
		for (j = 0; e1[j] != '\0'; j++)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				if (e1[j] == s[i])
				{
					s[i + 1] -= 32;
					break;
				}
			}
		}
		i++;
	}

	return (s);
}
