#ifndef FUNC_POINTER
#define FUNC_POINTER
#include <stddef.h>
/* Print a name */
void print_name(char *name, void (*f)(char *));

/* Using values of an array */
void array_iterator(int *array, size_t size, void (*action)(int));

/*  */
int int_index(int *array, int size, int (*cmp)(int));

#endif /* FUNC_POINTER */
