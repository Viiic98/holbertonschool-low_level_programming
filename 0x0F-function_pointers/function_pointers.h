#ifndef FUNC_POINTER
#define FUNC_POINTER
#include <stddef.h>
/* Print a name */
void print_name(char *name, void (*f)(char *));

/*  */
void array_iterator(int *array, size_t size, void (*action)(int));
#endif /* FUNC_POINTER */
