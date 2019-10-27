#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdarg.h>
int _putchar(char);
/**
 * struct ty - store the formats
 * @func: char of format
 * @p: function for each format
 */
typedef struct ty
{
	char *func;
	void (*p)(va_list);
} type;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list);
void print_i(va_list);
void print_f(va_list);
void print_s(va_list);
#endif /* VAR_FUNC */
