#include "hash_tables.h"
/**
 * key_index - Find the index of a key
 * @key: key
 * @size: size of array
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL || size <= 0)
		return (0);

	idx = hash_djb2(key) % size;
	return (idx);
}
