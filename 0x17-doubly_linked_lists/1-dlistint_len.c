#include "lists.h"

/**
 * dlistint_len- Function that prints all the elements of  lisi
 *@h: A pointer
 *Return: The nmber of nodes in the doubly linked list of type dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}
