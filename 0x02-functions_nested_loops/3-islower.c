#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	int r;

	r = _islower('a');
	_putchar(r + '0');
	r = _islower('b');
	_putchar(r + '0');
	r = _islower('C');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
int _islower(int c)
{
	int i, a;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c != i)
		{
			a = 0;
		}else
		{
			a = 1;
			break;
		}
	}

	return (a);
}
