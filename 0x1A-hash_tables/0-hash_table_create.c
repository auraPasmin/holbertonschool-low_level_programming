#include "hash_tables.h"
/**
 * hash_table_create - return (the hash)
 * @size: int size
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash = malloc(sizeof(hash_table_t) * 1);

	if (hash == NULL)
	{
		free(hash);
		return (NULL);
	}

	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}

	for (i = 0; i < size ; i++)
	{
		hash->array[i] = NULL;
	}
	hash->size = size;

	return (hash);
}
