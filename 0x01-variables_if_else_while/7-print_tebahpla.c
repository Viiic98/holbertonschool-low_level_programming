#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a = 'z', i = 'a';

	while (a >= i)
	{
		putchar(a);
		a--;
	}

	putchar('\n');
	return (0);
}
