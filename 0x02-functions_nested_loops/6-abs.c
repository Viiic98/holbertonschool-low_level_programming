#include "holberton.h"

int _abs(int n)
{
	int a;
	if (n < 0)
	{
		a = n * -1;
	}
	else
	{
		a = n;
	}

	return (a);
}
