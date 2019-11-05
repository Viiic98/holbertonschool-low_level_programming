#include "lists.h"
/**
 * free_listint - free the memory
 * @head: head pointer
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tail = head;

	while (tail)
	{
		tail = head->next;
		free(head);
		head = tail;
	}
}
