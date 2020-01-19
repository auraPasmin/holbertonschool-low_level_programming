#include "hash_tables.h"
/**
 * key_index - Function implementing the djb2
 * @key:  key.
 * @size: size of the array.
 * Return: Index at which the key/value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	idx = (hash_djb2(key) % size);

	return (idx);
}
