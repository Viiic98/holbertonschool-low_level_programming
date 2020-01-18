#include "hash_tables.h"
/**
 * hash_table_set - Add element
 * @ht: hash table
 * @key: Key that will be inserted
 * @value: Value that will be inserted
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tail = (*ht->array), *new = NULL;
	char *k, *v;

	k = strdup(key);
	v = strdup(value);

	if (tail->key == NULL)
	{
		tail->key = k;
		tail->value = v;
		tail->next = NULL;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
		new->key = k;
		new->value = v;
		new->next = NULL;
	}
	return (1);
}
