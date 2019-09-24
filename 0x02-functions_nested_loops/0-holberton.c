#include "holberton.h"

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
