#include "hash_tables.h"
/**
 * hash_table_delete - Free a hash table
 * @ht: hash table
 * Return: Nothing, just free
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current)
			{
				tmp = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = tmp;
			}
		}
		free(ht->array);
		free(ht);
	}
}
