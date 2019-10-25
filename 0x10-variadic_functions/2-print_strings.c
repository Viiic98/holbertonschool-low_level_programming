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

	for (i = 0; i + 1 < n; i++)
	{
		string = va_arg(ar, char*);
		if (separator != '\0')
		{
			if (string == '\0')
				printf("(nil)%s", separator);
			else
				printf("%s%s", string, separator);
		}
		else if (string == '\0')
			printf("(nil)");
		else
			printf("%s", string);
	}
	printf("%s\n", va_arg(ar, char*));
	va_end(ar);
}
