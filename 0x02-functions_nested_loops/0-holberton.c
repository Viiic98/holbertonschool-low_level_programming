#include "holberton.h"
/**
 * main- Entry point
 *
 * Return: Always 0 (Success)
 */
void holberton(void);

int main()
{
	holberton();
	return (0);
}

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
