#include "hash_tables.h"
/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 * Return: Nothing, just print the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tail;
	unsigned long int i;
	int flag = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tail = ht->array[i];
		if (tail != NULL)
		{
			if (flag == 0)
				printf(", ");
			flag = 1;
		}
		while (tail)
		{
			printf("'%s': '%s'", tail->key, tail->value);
			if (flag == 1 && tail->next != NULL)
				printf(", ");
			else
				flag = 0;
			tail = tail->next;
			if ((i + 1) == ht->size && tail == NULL)
			{
				printf("}\n");
				return;
			}
		}
		if ((i + 1) == ht->size)
		{
			printf("}\n");
			return;
		}
	}
}
