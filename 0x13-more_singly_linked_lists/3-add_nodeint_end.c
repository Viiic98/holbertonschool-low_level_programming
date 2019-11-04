#include "lists.h"
/**
 * add_nodeint_end - node at the end
 * @head: head pointer
 * @n: number that will be added
 * Return: address at the new node created
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail = *head, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
		*head = node;
	else
	{
		while (tail->next)
		{
			tail = tail->next;
		}
		tail->next = node;
	}

	return (node);
}
