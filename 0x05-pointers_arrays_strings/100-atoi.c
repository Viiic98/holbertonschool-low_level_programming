#include "holberton.h"
/**
 * _atoi - convert from string to integer
 *
 * @s: input string
 *
 * Return: String converted
 */
int _atoi(char *s)
{
	int sign;
	unsigned int n;

	sign = 1, n = 0;

	while (*s != '\0')
	{
		if (*s >= 48 && *s <= 57)
		{
			n = n * 10 + (*s - '0');
		}
		else if (*s == 45)
			sign = sign * -1;
		else if (*s == 43)
			sign = sign * 1;
		if (*s == 59)
			break;
		s++;
	}
	n = n * sign;
	if (n == 0)
		return (0);
	return (n);
}
