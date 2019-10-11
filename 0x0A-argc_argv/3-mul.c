#include "holberton.h"
/**
 *
 *
 *
 */
int main(int argc, char* argv[])
{
	int mul;

	if (argc == 2)
	{
		mul = argv[argc - 1] * argv[argc];
		_putchar(mul + '0');
	}	
	else
	{	
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}
	_putchar('\n');
	return (0);
}
