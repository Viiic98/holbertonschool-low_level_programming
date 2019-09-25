#include "holberton.h"
/**
 * print_times_table - is the function for display the tables
 *
 *
 * Return: the tables from 0 at 9
 */
void print_times_table(int n)
{
	int a, b, c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if(c <= 9)
			{
				_putchar(c + '0');
			}
			else if (c >= 10 && c <= 99)
			{
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (c >= 100)
			{
				_putchar(c / 10 + '0');
				_putchar((c % 100) / 10 + '0');
				_putchar(c % 10 + '0');
			}
			if (b != n)
			{
				if (a * (b + 1) >= 100)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if ((a * (b + 1) >= 10) && (a * (b + 1) <= 99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
