#include "hash_tables.h"
/**
 * hash_table_get - get the value with a specific key
 * @ht: hash table
 * @key: Key that is going to be found
 * Return: value associated or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tail = (*ht->array);

	if (key != NULL)
	{
		if (tail->next == NULL)
		{
			if (strcmp(tail->key, key) == 0)
				return (tail->value);
			else
				return (NULL);
		}
		else
		{
			while (tail->next != NULL)
			{
				if (strcmp(tail->key, key) != 0)
					tail = tail->next;
				else
					return (tail->value);
			}
			return (NULL);
		}
	}
	else
		return (NULL);
}
