#include "lists.h"
/**
 * list_len - Return the number of nodes, elements
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = (*h).next;
		nodes++;
	}

	return (nodes);
}
