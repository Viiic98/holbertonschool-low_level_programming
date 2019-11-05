#include "lists.h"
/**
 * free_listint2 - free and change the head to null
 * @head: head pointer
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tail = *head;

	while (tail)
	{
		tail = tail->next;
		free(*head);
		*head = tail;
	}
	free(*head);
	*head = NULL;
}
