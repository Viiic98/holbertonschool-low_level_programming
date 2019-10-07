#include "holberton.h"
/**
 * _strpbrk - Function that print after any ocurrence
 *
 * @s: String that will be checked
 * @accept: Character that are accepted
 *
 * Return: Address of the ocurrence
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (0);
}
