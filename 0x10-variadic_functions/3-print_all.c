#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_c - Print chars
 * @c: list of arguments
 * Return: nothing
 */
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_i - print integers
 * @c: list of arguments
 * Return: nothing
 */
void print_i(va_list c)
{
	printf("%d", va_arg(c, int));
}
/**
 * print_f - print floats
 * @c: list of arguments
 * Return: nothing
 */
void print_f(va_list c)
{
	printf("%f", va_arg(c, double));
}
/**
 * print_s - print strings
 * @c: list of arguments
 * Return: nothing
 */
void print_s(va_list c)
{
	char *s;

	s = va_arg(c, char *);

	if (*s == '\0')
	{
		s = "(nil)";
	}
	printf("%s", s);
}
/**
 * print_all - Main function that print
 * @format: list of format
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	char *separator = "";
	int i, j;

	type func[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL},
	};

	i = 0;
	va_start(ar, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (*(func[j].p) != NULL)
		{
			if (format[i] == *(func[j].func))
			{
				printf("%s", separator);
				func[j].p(ar);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ar);
	printf("\n");
}
