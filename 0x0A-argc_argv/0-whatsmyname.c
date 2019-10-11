#include "holberton.h"
#include <stdio.h>
int main(int argc, char* argv[])
{
	while (*argv[argc - 1] != '\0')
	{
		_putchar(*argv[argc - 1]);
		argv[argc - 1]++;
	}
	_putchar('\n');
	return (0);
}
