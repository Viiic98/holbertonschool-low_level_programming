#include "holberton.h"
/**
 * _abs - The function for absolute valor
 *
 * @n: is the variable number
 *
 * Return: Always the absolute number for the input
 */
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
