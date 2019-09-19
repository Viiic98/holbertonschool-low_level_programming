#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always(Success)
 */
int main(void)
{
	char a = 'a';
	char i = 'z';

	while (a <= i)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
