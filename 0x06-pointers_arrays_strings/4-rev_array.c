#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - Function that reverse an integer array
 *
 * @a:
 * @n:
 *
 * Return: The array printed on reverse
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	n--;

	for (i = 0; i != n; n--, i++)
	{	       
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
	
}
