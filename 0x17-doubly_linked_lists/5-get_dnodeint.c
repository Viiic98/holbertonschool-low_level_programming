#include "lists.h"
/**
 * get_dnodeint_at_index - Return pointer to a specific node
 * @head: pointer to a linked list
 * @index: index of the node
 * Return: pointer to the node specified
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (index > 0 && current)
		current = current->next, index--;
	if (!current)
		return (NULL);
	return (current);
}
