#include "holberton.h"
/**
 * _strncpy - Function that copy two strings
 *
 * @dest: String that will store the copied string
 * @src: String that will be copied
 * @n: Number of characters that will be copied
 *
 * Return: The string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
