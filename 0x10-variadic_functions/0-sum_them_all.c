#include "variadic_functions.h"
/**
 * sum_them_all - Variadic function that add arguments
 *
 * @n: arguments
 * Return: Sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	int sum;
	unsigned int i;

	sum = 0;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ar, int);
	}
	va_end(ar);

	return (sum);
}
