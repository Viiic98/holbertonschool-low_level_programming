#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (Success)
 */
int main(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (a != b)
			{
				if (a != 1 && b != 0 && a < 9)
				{
					putchar(a % 10 + '0');
					putchar(b % 10 + '0');

					if (a != 8 || b != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
