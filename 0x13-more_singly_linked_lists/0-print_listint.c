#include "lists.h"
/**
 * print_listint - Print all elements
 * @h: head pointer
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tail = h;
	size_t nodes = 0;

	while (tail)
	{
		printf("%d\n", tail->n);
		tail = tail->next;
		nodes++;
	}

	return (nodes);
}
