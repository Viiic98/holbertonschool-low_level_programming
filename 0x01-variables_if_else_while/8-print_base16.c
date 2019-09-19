#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a;

	while (a != EOF)
	{
		putchar(a % 16 + '0');
		a++;
	}

	putchar('\n');
	return (0);
}
