#include "holberton.h"
/**
 * _isalpha - Entry c
 *
 * @c: input variable
 *
 * Return: Always return 1 for alpha types
 */
int _isalpha(int c)
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
	if (a == 0)
	{
		for (i = 'A'; i <=  'Z'; i++)
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
	}
	return (a);
}
