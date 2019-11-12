#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - print the values of every node
 * @h: struct pointer
 * Return: number of nodes(elements)
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr;

	ptr = h;


	while (ptr != NULL)
	{
		if ((*ptr).str != NULL)
			printf("[%d] %s\n", (*ptr).len, (*ptr).str);
		else
			printf("[0] (nil)\n");
		ptr = (*ptr).next;
		nodes++;
	}
	return (nodes);
}
