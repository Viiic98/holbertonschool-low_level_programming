#include "holberton.h"
#include <stdio.h>
/**
 * print_array - The main function
 *
 * @a: Array
 * @n: Number of values want to print
 *
 * Return: Only n values
 */
void print_array(int *a, int n)
{
	int i;

	n = n - 1;
	for (i = 0; i <= n; i++)
	{
		if (i != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
	}
}
