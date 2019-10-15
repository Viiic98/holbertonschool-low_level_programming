#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - Duplicate a string
 *
 * @str: String that will be copied in a new memory location
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	char *a;
	int len, i;

	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	a = malloc(len *  sizeof(char) + 1);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		a[i] = str[i];
	}
	a[i] = '\0';

	return (a);
}
