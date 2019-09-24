#include "holberton.h"
/**
 * holberton - Entry point
 *
 * Return: Always a string (Success)
 */
void holberton(void)
{
	char H[] = "Holberton";
	int i, c = sizeof(H);

	for (i = 0; i <= c; i++)
	{
		_putchar(H[i]);
	}
	_putchar('\n');
}
