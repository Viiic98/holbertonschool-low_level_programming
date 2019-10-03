#include "holberton.h"
/**
 * _strncat - Concatenate with an specific size
 *
 * @dest: String that will be concatenate
 * @src: Word that will be added
 * @n: Number of characters that will be added
 *
 * Return: The word that was concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++, j++;
	}

	return (dest);
}
