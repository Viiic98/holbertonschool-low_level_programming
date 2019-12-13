#include "lists.h"
/**
 * sum_dlistint - Sum the data of a linked list
 * @head: pointer to a linked list
 * Return: Sum of all data or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tail;
	int sum = 0;

	if (!head)
		return (0);
	tail = head;
	while (tail)
		sum += tail->n, tail = tail->next;
	return (sum);
}
