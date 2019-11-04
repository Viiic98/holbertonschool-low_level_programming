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
	listint_t *tail = *head, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	while (idx > 1)
	{
		if (tail == NULL)
		{
			free(node);
			return (NULL);
		}
		tail = tail->next;
		idx--;
	}
	node->next = tail->next;
	tail->next = node;
	return (node);
}
