#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: size of array
 * Return: Pointer to new hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	hash_node_t **n_array;

	if (size <= 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);

	new->size = size;

	n_array = calloc(size, sizeof(hash_node_t **));
	if (n_array == NULL)
	{
		free(new);
		return (NULL);
	}
	new->array = n_array;

	return (new);
}
