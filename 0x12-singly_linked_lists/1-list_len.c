#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: list_t
 * Return: nodes.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
