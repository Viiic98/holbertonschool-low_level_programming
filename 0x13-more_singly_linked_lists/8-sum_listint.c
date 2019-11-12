#include "lists.h"
/**
 * sum_listint -  sum of all the data n
 * @head: head pointer
 * Return: sum of all
 */
int sum_listint(listint_t *head)
{
	listint_t *tail = head;
	int sum = 0;

	while (tail)
	{
		sum += tail->n;
		tail = tail->next;
	}

	return (sum);
}
