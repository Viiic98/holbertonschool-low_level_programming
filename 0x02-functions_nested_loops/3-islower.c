#include "holberton.h"
/**
 * _islower - Entry
 *
 * @c: input variable
 *
 * Return: Always display true for lowercase characters
 */

int _islower(int c)
{
	int i, a;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i)
		{
			a = 0;
		}
		else
		{
			a = 1;
			break;
		}
	}

	return (a);
}
