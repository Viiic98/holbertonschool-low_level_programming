#include "lists.h"
/**
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tail, *tmp;

	if (!*head)
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
		return(1);
	}
	tail = *head;
	while (index > 1 && tail->next)
		index--, tail = tail->next;
	if (index == 1)
	{
		tmp = tail->next;
		tail->next = tmp->next;
		tail->next->prev = tail;
		free(tmp);
		return (1);
	}
	return (-1);
}
