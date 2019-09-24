#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always a string (Success)
 */

int main(void)
{
	char H[] = "Holberton";
	int i, c = sizeof(H);

	for (i = 0; i < c; i++)
	{
		_putchar(H[i]);
	}
	_putchar('\n');
	return (0);
}
