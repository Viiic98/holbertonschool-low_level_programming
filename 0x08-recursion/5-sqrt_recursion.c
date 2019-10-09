#include "holberton.h"
/**
 * _sqrt_recursion - Square root
 *
 * @n: input number
 *
 * Return: Square
 */
int _sqrt_recursion(int n)
{
	int a;

	a = go_over(n, 1);

	return (a);
}
/**
 * go_over - Go over the number
 *
 * @n: input number
 * @i: index
 * Return: Square
 */
int go_over(int n, int i)
{
	int a;

	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else if (i < n)
		a = go_over(n, i + 1);

	return (a);
}
