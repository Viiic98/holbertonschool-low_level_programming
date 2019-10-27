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

	for (i = 0; i + 1 < n; i++)
	{
		printf("%d", va_arg(ar, int));
		if (separator != '\0')
			printf("%s", separator);
	}
	printf("%d\n", va_arg(ar, int));
	va_end(ar);
}
