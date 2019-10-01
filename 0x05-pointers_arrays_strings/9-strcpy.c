#include "holberton.h"
/**
 * _strcpy - Copy the value
 *
 * @dest: Pointer that will recieve the value
 * @src: String that will be copiest
 *
 * Return: The string copied
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
