#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - The function for display the numbers until 98
 *
 * @n: the input variable
 *
 * Return: Display the list of natural numbers until 98
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
