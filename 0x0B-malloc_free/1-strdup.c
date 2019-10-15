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
	int i;

	if (*str == '\0')
		return (NULL);

	a = malloc(sizeof(str));

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];

	return (a);
}
