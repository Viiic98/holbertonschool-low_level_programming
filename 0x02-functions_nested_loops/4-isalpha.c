#include "holberton.h"

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
	if(a == 0)
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
