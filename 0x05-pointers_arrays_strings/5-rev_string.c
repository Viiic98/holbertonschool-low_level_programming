#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
void rev_string(char *s)
{
	int c;

	while (s[c] != '\0')
	{
		c++;
	}
	putchar('\n');

	while (c >= 0)
	{
		putchar(s[c]);
		c--;
	}
	
	putchar('\n');
}
