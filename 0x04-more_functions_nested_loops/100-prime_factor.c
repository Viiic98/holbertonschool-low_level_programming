#include "holberton.h"
#include <stdio.h>
/**
 * main - Function for print the largest prime factor
 *
 * Return: The largest
 */
int main(void)
{
	long int n;
	int i;

	n = 612852475143;
	i = 2;

	while (n != 1)
	{
		if (n % i == 0)
			n = n / i;
		else
			i++;
	}

	printf("%i\n", i);
	return (0);
}
