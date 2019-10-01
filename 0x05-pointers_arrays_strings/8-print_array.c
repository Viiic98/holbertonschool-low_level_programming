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

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
