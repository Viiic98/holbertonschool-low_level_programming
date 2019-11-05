#include "lists.h"
/**
 * delete_nodeint_at_index - delete a specific node
 * @head: head pointer
 * @index: inde of node that will be deleted
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tail = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = tail->next;
		free(tail);
	}
	else
	{
		for (i = 1; i < index; i++)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next = tail->next->next;
		if (tail == NULL)
			return (-1);
	}
	return (1);
}
