#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Printing a string in reverse
 *
 * @s: Input string
 *
 * Return:
 */
void print_rev(char *s)
{
	int c;

	
	while (s[c] != '\0')
	{
		c++;
	}
	
	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	putchar('\n');
}
