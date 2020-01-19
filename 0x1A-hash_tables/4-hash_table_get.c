#include "hash_tables.h"
/**
 * hash_table_get - get the value with a specific key
 * @ht: hash table
 * @key: Key that is going to be found
 * Return: value associated or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tail;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tail = ht->array[idx];
	while (tail)
	{
		if (strcmp(tail->key, key) == 0)
			return (tail->value);
		tail = tail->next;
	}
	return (NULL);
}
