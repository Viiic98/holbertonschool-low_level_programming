#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Store arguments
 *
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: print coins changed
 */
int main(int argc, char *argv[])
{
	int n, c, r;

	c = 0;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n >= 25)
	{
		r = n % 25;
		c = c + (n / 25);
		n = r;
	}
	if (n >= 10)
	{
		r = n % 10;
		c = c + (n / 10);
		n = r;
	}
	if (n >= 5)
	{
		r = n % 5;
		c = c + (n / 5);
		n = r;
	}
	if (n >= 2)
	{
		r = n % 2;
		c = c + (n / 2);
		n = r;
	}
	if (n == 1)
		c = c + 1;

	printf("%d\n", c);
	return (0);
}
