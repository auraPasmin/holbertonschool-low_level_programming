#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of  lisi
 *@h: A pointer
 *Return: The nmber of nodes in the doubly linked list of type dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t c = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		c++;
	}
	return (c);
}
