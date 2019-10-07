#include "holberton.h"
/**
 * _memcpy - Copy values of an array to another array
 *
 * @dest: The array that recieve that will be changed
 * @src: The array that take the values to will be copied
 * @n: number of places that will be copied
 *
 * Return: Array that was modified
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
