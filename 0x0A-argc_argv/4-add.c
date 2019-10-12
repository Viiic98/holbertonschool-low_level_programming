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
	int i, add, s;

	i = 1, add = 0, s = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		while (*argv[i] != '\0')
		{
			if (*argv[i] >= 48 && *argv[i] <= 57)
			{
				if (*(argv[i] + 1) != '\0')
					++argv[i];
				else
					break;
			}
			else if (*argv[i] == 45)
			{
				s = 1;
				++argv[i];
			}
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		if (s == 1)
			add -= atoi(argv[i]);
		else
			add += atoi(argv[i]);
		i++;
		s = 0;
	}
	printf("%d\n", add);
	return (0);
}
