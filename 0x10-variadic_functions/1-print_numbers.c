#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Printing numbers
 *
 * @separator: This will be between eacch argument
 * @n: number of arguments
 *
 * Return: Nothing, is void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ar;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (i < (n - 1) && separator != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
