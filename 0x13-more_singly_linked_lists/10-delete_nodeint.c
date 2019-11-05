#include "lists.h"
/**
 * delete_nodeint_at_index - delete a specific node
 * @head: head pointer
 * @index: inde of node that will be deleted
 * Return: 1 if succeeded -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tail = *head, *temp;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tail = tail->next;
		free(*head);
		*head = tail;
	}
	else
	{
		index--;
		while (index > 0 && tail != NULL)
		{
			tail = tail->next;
			index--;
		}
		if (tail == NULL)
			return (-1);
		temp = tail;
		temp = temp->next->next;
		free(tail->next);
		tail->next = temp;
	}
	return (1);
}
