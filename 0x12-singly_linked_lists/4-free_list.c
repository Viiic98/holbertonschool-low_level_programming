#include "lists.h"
#include <stdlib.h>
/**
 * free_list - free the list
 * @head: list
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = (*head).next;
		free((*ptr).str);
		free(ptr);
	}
}
