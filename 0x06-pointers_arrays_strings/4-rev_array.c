#include "holberton.h"
/**
 * reverse_array - Function that reverse an integer array
 *
 * @a: Address of the array
 * @n: Size of the array
 *
 * Return: Swap an integer array
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
