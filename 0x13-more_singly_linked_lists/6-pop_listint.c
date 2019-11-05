#include "lists.h"
/**
 * pop_listint - remove the node to the list
 * @head: is the first node
 * Return:first node or 0 if it is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *d = *head;
	int n;

	if (*head != NULL && head != NULL)
	{
		n = d->n;
		*head = d->next;
		free(d);
	}
	return (n);
}
