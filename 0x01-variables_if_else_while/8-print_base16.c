#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a;
	char b;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar(a % 16 + '0');
	}
	for (b = 'a' ; b <= 'f' ; b++)
	{
		putchar(b);
	}

	putchar('\n');
	return (0);
}
