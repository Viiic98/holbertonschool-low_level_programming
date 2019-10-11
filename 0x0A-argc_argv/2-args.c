#include "holberton.h"
/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		while (*argv[i] != '\0')
		{
			_putchar(*argv[i]);
			argv[i]++;
		}
		_putchar('\n');
	}
	return (0);
}
