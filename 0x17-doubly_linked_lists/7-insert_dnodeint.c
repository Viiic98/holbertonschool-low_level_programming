#include "lists.h"
/**
 * insert_dnodeint_at_index - Inser a node with a specific index
 * @h: pointer to linked list
 * @idx: index
 * @n: number that will be the data
 * Return: pointer to new node or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tail, *new;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*h && idx != 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	tail = *h;
	while (idx > 1 && tail->next)
		idx--, tail = tail->next;
	if (idx == 1)
	{
		if (!tail->next)
			new->next = NULL;
		else
		{
			new->next = tail->next;
			tail->next->prev = new;
		}
		new->prev = tail;
		tail->next = new;
		return (new);
	}
	else
		return (NULL);
}
