#ifndef VAR_FUNC
#define VAR_FUNC
#include <stdarg.h>
int _putchar(char);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(void *);
void print_i(void *);
void print_f(void *);
void print_s(void *);
#endif /* VAR_FUNC */
