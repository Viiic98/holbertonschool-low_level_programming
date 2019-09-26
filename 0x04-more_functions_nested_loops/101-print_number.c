#include "holberton.h"
#include <stdio.h>
/**
 * print_number - Function for display integers
 *
 * @n: input variable
 *
 * Return: Display integers
 */
void print_number(int n)
{
	int size, i, k, a;

	size = 0;


	if (n == 0)
	{
		_putchar('0');
	}
	else
	{

		if (n < 0)
		{
			n = n * -1;
			_putchar('-');
		}
		
		a = n;
		k = 0,1;
		
		while (a != 0)
		{
			a = a / 10;
			size++;
			k = k * 10;
		}
		printf("%d\n", k);
		for (i = 0; i < size; i++)
		{
		

			/*_putchar(n / k + '0');*/
			n = n % k;
			k = k / 10;		
		}
	}
	
	
}
