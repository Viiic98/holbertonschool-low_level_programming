#include "holberton.h"
/**
 * _isdigit - Check for a digit
 *
 * @c: input variable
 *
 * Return: If the value is a digit true or false(1/0)
 */
int _isdigit(int c)
{
	int r, i;

	for (i = '0'; i <= '9'; i++)
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
