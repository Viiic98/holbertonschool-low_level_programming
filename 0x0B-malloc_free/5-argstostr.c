#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - Concatenate arguments
 *
 * @ac: number of arguments
 * @av: value of arguments
 *
 * Return: pointer to a concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int size, i, k, z;

	if (av == NULL || ac == 0)
		return (NULL);

	k = size = z = 0;

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
			k++, size++;
		k = 0;
	}

	a = malloc(size * sizeof(char) + (1 + ac));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			a[z] = av[i][k];
			k++, z++;
			if (av[i][k] == '\0')
			{
				a[z] = '\n';
				z++;
			}
		}
		k = 0;
	}
	a[z] = '\0';


	return (a);
}
