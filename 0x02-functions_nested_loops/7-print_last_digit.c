#include "holberton.h"

int main(void)
{
	

	print_last_digit(98);
	print_last_digit(0);
	print_last_digit(-12233321);
	
	_putchar('\n');

	return (0);
}
int print_last_digit(int n)
{
	int last;
	last = n%10;
	
	_putchar(last + '0');
	return (last);
}
