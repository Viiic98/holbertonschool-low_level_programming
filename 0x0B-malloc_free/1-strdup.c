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

	if (str == NULL)
		return (NULL);

	a = malloc(sizeof(str));

	if (a == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		a[i] = str[i];

	a[i] = '\0';

	free(str);
	return (a);
}
