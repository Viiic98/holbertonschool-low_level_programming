#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add a new node
 * @head: struct pointer
 * @str: char that will be added
 * Return: return a struct pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	char *n_str;

	if (str == NULL)
		return (NULL);
	n_str = strdup(str);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	(*ptr).len = strlen(str);
	(*ptr).str = n_str;
	(*ptr).next = *head;
	*head = ptr;
	return (*head);
}
