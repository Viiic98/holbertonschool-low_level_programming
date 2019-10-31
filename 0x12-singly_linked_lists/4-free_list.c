#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the list
 * @head: list
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = (*head).next;
		free(head);
	}
}
