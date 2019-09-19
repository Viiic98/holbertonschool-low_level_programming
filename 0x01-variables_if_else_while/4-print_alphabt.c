#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	char a = 'a', i = 'z';

	while (a <= i)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');
	return (0);
}
