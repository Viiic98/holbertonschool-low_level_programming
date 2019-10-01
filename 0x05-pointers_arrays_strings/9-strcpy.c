#include "holberton.h"
/**
 * _strcpy - Copy the value
 *
 * @dest: Pointer that will recieve the value
 * @src: String that will be copiest
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, a;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	
	for (a = 0; a <= i; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
