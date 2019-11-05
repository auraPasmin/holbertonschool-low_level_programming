#include "lists.h"

/**
 * print_listint - prints all the elements list
 * @h: listint_t
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
