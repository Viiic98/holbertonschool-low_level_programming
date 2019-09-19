#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a = 0;

	for (a ; a <= 9 ; a++)
	{
		putchar(a % 10 + '0');

		if (a != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
