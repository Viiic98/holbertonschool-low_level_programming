#include "lists.h"
/**
 * add_dnodeint - add node at the beginning
 * @head: pointer to a linked list
 * @n: element that will be inserted
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!*head)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
		new->prev = NULL;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
