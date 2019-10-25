#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - printing all
 *
 * @format: is a list of types of arguments
 * We can not change the value or pointer
 * Return: Nothing, is void
 */
typedef struct ty
{
	char func;
	char *s;
	void (*p)(void *);
} type;
void print_all(const char * const format, ...)
{
	va_list ar;
	void *po;
	unsigned int i, j;
	type func[] = {
		{'c', "char", print_c},
		{'i', "int", print_i},
		{'f', "float", print_f},
		{'s', "char *", print_s},
		{'\0', NULL, NULL},
	};
	
	i = 0;
	va_start(ar, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (func[j].func != '\0')
		{
			if (func[j].func == format[i])
			{
				po = va_arg(ar, func[j].s);
				func[j].p(po);
				if (format[i + 1] != '\0')
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ar);
}
void print_c(void * c)
{
	printf("%c", c);
}
void print_i(void * c)
{
	printf("%d", c);
}
void print_f(void * c)
{
	printf("%f", c);
}
void print_s(void * c)
{
	if (*c == '\0')
		printf("(nil)");
	if (*c != '\0')
		printf("%s", c);
}
