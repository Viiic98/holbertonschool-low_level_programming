#include "lists.h"
/**
 * get_nodeint_at_index - getting a node with an index specification
 * @head: head pointer
 * @index: index of the node
 * Return: the address to the node specified
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tail = head;

	while (index > 0)
	{
		if (tail->next == NULL)
			return (NULL);
		tail = tail->next;
		index--;
	}

	return (tail);
}
