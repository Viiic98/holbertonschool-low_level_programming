#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Printing strings
 *
 * @separator: Separator between strings
 * @n: number of arguments
 * Return: Nothing, is void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int i;
	char *string;

	va_start(ar, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ar, char *);
		if (string == '\0')
			printf("(nil)");
		else
			printf("%s", string);

		if (i < (n - 1) && separator != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(ar);
}
