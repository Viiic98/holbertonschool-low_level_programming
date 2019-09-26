#include "holberton.h"
/**
 * _isupper - Checking for uppercases
 *
 * @c: input variable
 *
 * Return: Check if the value es uppercase character and return 0 or 1
 */
int _isupper(int c)
{
	int r, i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			r = 1;
			break;
		}
		else
		{
			r = 0;
		}
	}

	return (r);
}
