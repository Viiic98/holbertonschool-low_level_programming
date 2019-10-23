#include "function_pointers.h"
/**
 * print_name - function pointer
 * @name: variable that will be used
 * @f: function that will be used
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == '\0' || f == NULL)
		return;
	f(name);
}
