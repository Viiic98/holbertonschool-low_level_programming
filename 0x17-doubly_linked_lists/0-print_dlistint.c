#include "lists.h"
/**
 * print_dlistint - Function that print elements in a l_list
 * @h: pointer to linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tail = h;
	int i = 0;

	if (h == NULL)
		return (0);
	while (tail)
	{
		printf("%d\n", tail->n);
		tail = tail->next, i++;
	}
	return (i);
}
