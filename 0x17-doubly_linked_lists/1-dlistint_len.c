#include "lists.h"
/**
 * dlistint_len - Count number of elements
 * @h: pointer to a linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tail = h;
	size_t i = 0;

	if (!tail)
		return (0);
	while (tail)
	{
		i++;
		tail = tail->next;
	}
	return (i);
}
