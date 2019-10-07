#include "holberton.h"
/**
 * _strspn - Looking for the lenght of characters are the same
 *
 * @s: String that will be checked
 * @accept: Characters uniques that will be checked
 *
 * Return: number that represent how many times appears the chars
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				j = 0;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (i);
		}
		i++;
	}

	return (i);
}
