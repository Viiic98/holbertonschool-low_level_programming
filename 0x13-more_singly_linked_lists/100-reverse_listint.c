#include "lists.h"
/**
 * reverse_listint - Reverse
 * @head: head pointer
 * Return: the address at the last link
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last, *tail = *head;

	while ((*head)->next)
	{
		*head = (*head)->next;
	}

	last = rec(tail);
	last->next = NULL;
	return (*head);
}
/**
 * rec - recursive function
 * @head: head pointer
 * Return: head actual
 */
listint_t *rec(listint_t *head)
{
	listint_t *tail;

	if (head->next)
	{
		tail = rec(head->next);
		tail->next = head;
		return (head);
	}
	else
	{
		return (head);
	}
}
