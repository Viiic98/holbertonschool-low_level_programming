#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - Add the value at the end of list
 * @head: list
 * @str: input string
 * Return: list pointer
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *n_list;
	char *n_str;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	n_str = strdup(str);

	if (n_str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).len = _strlen(n_str);
	(*ptr).str = n_str;
	(*ptr).next = NULL;

	if (*head == NULL)
		*head = ptr;
	else
	{
		n_list = *head;
		while ((*n_list).next != NULL)
		{
			n_list = (*n_list).next;
		}
		(*n_list).next = ptr;
	}

	return (n_list);
}
/**
 * _strlen - count the number of characters of a string
 * @str: input string
 * Return: number of characters
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str)
		str++, len++;
	return (len);
}
