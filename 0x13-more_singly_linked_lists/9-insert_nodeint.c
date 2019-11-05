#include "lists.h"
/**
 * insert_nodeint_at_index - inserting a node in a specified index
 * @head: head pointer
 * @idx: index
 * @n: value
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tail, *node;

	if (head == NULL)
		return (NULL);
	tail = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		idx--;
		while (idx > 0 && tail != NULL)
		{
			tail = tail->next;
			idx--;
		}
		if (tail == NULL)
		{
			free(node);
			return (NULL);
		}
		node->next = tail->next;
		tail->next = node;
	}
	return (node);
}
