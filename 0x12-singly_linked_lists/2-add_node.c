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
	(*ptr).next = *head;
	*head = ptr;
	return (*head);
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
