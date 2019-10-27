#include "variadic_functions.h"
#include <stdio.h>
/**
  print_all - printing all
 *
 * @format: is a list of types of arguments
 * We can not change the value or pointer
 * Return: Nothing, is void
 */
typedef struct ty
{
	char func;
	void (*p)(va_list);
} type;
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
void print_i(va_list c)
{
	printf("%d", va_arg(c, int));
}
void print_f(va_list c)
{
	printf("%f", va_arg(c, double));
}
void print_s(va_list c)
{
	char *s;
	s = va_arg(c, char *);
	if (*s == '\0')
		s = "(nil)";
	printf("%s", s);
}
void print_all(const char * const format, ...)
{
	va_list ar;
	unsigned int i, j;
	type func[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
	};
	
	i = 0;
	va_start(ar, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == func[j].func)
			{
				func[j].p(ar);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
