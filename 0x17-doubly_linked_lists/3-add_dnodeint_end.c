#include "lists.h"
/**
 * add_dnodeint_end - Add new node at the end
 * @head: pointer to a linked list
 * @n: number that will be inserted
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!tail)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		while (tail->next)
			tail = tail->next;
		new->next = NULL;
		new->prev = tail;
		tail->next = new;
	}
	return (new);
}
