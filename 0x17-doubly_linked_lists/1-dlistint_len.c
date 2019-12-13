#include "lists.h"
/**
 * dlistint_len - Count number of elements
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tail = h;
	int i = 0;

	if (!tail)
		return (0);
	while (tail)
	{
		if (tail->n)
			i++;
		tail = tail->next;
	}
	return (i);
}
