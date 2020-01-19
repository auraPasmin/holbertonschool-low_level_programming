#include "hash_tables.h"
/**
 * hash_table_delete - delete..
 * @ht: hash_table_t
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *top;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		top = ht->array[i];
		while ((temp = top))
		{
			top = top->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
