#include "lists.h"
/**
 * listint_len - number of elements
 * @h: head pointer
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tail = h;
	size_t nodes = 0;

	while (tail)
	{
		nodes++;
		tail = tail->next;
	}
	return (nodes);
}
