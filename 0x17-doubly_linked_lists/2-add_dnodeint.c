#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * @h: The first node of the doubly linked list
 * Return: Number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t c = 0;

	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	return (c);
}
