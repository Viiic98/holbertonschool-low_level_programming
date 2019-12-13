#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: pointer to a linked list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
