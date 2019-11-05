#include "lists.h"
/**
 * pop_listint - free the first node and return the value
 * @head: head pointer
 * Return: value that was stored in the node
 */
int pop_listint(listint_t **head)
{
	listint_t *tail = *head;
	int n;

	if (head == NULL)
		return (0);

	n = tail->n;
	tail = tail->next;
	free(*head);
	*head = tail;
	return (n);
}
