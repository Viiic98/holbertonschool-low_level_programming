#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
int print_sign(int n)
{
	int a;

	if(n > 0)
	{
		a = 1;
		_putchar('+');
	}
	else if(n == 0)
	{
		a = 0;
		_putchar('0');
	}
	else if(n < 0)
	{
		a = -1;
		_putchar('-');
	}
	return (a);
}
