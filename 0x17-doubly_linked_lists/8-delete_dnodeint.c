#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node with specific index
 * @head: pointer to a linked list
 * @index: index that will be deleted
 * Return: 1 if success, -1 if it not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tail, *tmp;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		if (!(*head)->next)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		tmp = *head;
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	tail = *head;
	while (index > 1 && tail->next)
		index--, tail = tail->next;
	if (index == 1)
	{
		tmp = tail->next;
		tail->next = tmp->next;
		if (tail->next)
			tail->next->prev = tail;
		free(tmp);
		return (1);
	}
	return (-1);
}
