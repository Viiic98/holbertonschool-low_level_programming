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
	hash_node_t *tail, *new_n;
	unsigned long int idx;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tail = ht->array[idx];
	while (tail)
	{
		if (strcmp(key, tail->key) == 0)
		{
			tail->value = strdup(value);
			return (1);
		}
		else
			tail = tail->next;
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;

	return (1);
}
