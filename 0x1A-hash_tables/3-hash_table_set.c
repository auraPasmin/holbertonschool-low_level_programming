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
	hash_node_t *t, *new;
	unsigned long int idx;

	if (!key || !value || !ht)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	t = ht->array[idx];
	while (t)
	{
		if (strcmp(key, t->key) == 0)
		{
			t->value = strdup(value);
			return (1);
		}
		else
			t = t->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;

	return (1);
}
