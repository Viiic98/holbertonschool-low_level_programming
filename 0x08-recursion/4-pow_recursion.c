#include "holberton.h"
/**
 * _pow_recursion - Pow a number
 *
 * @x: Number that will be elevated
 * @y: pow
 *
 * Return: The number powed
 */
int _pow_recursion(int x, int y)
{
	int p;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	p = x * _pow_recursion(x, y - 1);

	return (p);
}
