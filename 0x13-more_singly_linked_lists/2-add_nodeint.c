#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - add node at the beginning
 * @head: head pointer
 * @n: number that will be added
 * Return: Address to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tail = *head, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = tail;
	*head = node;

	return (*head);
}
