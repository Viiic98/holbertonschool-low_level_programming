#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - store arguments
 *
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: add numbers
 */
int main(int argc, char *argv[])
{
	int i, add;

	i = 1;
	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		if (*argv[i] >= 48 && *argv[i] <= 57)
			add += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (0);
		}
		i++;
	}
	printf("%d\n", add);
	return (0);
}
