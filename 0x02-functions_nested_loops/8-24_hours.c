#include "holberton.h"
/**
 * jack_bauer - Function for display the seconds
 *
 * Return: Second by second
 */
void jack_bauer(void)
{
	int a, b;

	for (a = 00; a <= 23; a++)
	{
		for (b = 00; b <= 59; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}
}
