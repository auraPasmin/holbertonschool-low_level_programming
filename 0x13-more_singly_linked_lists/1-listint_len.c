#include "lists.h"
/**
 * listint_len - Prints a listint_t list
 * @h: is a node of the listin_t
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
