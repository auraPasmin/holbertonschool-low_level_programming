#include "lists.h"

/**
 * delete_dnodeint_at_index - Function that deletes a node at a given index
 * @head: A pointer to the first node of the doubly
 * @index: The index to delete the node
 * Return: 1 if success, -1 upon fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *c, *next;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	c = *head;
	if (index == 0)
	{
		*head = c->next;
		free(c);
		return (1);
	}
	for (count = 0; c != NULL && count < (index - 1); count++)
		c = c->next;
	if (c == NULL || c->next == NULL)
		return (-1);
	next = c->next->next;
	free(c->next);
	c->next = next;
	return (1);
}
