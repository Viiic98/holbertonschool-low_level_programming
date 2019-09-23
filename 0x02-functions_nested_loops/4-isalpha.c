#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar(r + '0');
	r = _isalpha('o');
	_putchar(r + '0');
	r = _isalpha(108);
	_putchar(r + '0');
	r = _isalpha(';');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
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
