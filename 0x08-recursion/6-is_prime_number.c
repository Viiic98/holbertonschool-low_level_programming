#include "holberton.h"
#include <stdio.h>
/**
 * is_prime_number - Find prime numbers
 *
 * @n: input number
 *
 * Return: 1 for primes otherwise 0
 */
int is_prime_number(int n)
{
	int a;

	a = _prime(n, 2);

	return (a);
}
/**
 * _prime - Go over the numbers
 *
 * @n: input number
 * @i: index
 * Return: 1 for primes ootherwise 0
 */
int _prime(int n, int i)
{
	int a;

	if (n == i)
	{
		return (1);
	}
	else if (n <= 1 || n % i == 0)
	{
		return (0);
	}
	else if (i < n)
		a = _prime(n, i + 1);

	return (a);
}
