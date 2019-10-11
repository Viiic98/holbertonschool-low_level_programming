#include "holberton.h"
/**
 * wildcmp - Comparing two string including wildcart
 *
 * @s1: First string
 * @s2: Second string, could contain wildcards *
 *
 * Return: 1 if is the same string
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (*(s2 + 1) == *s1)
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
