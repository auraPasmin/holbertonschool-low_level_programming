#include "lists.h"

/**
 * get_dnodeint_at_index - Function that gets the given node of a double
 * @head: A pointer to the first node
 * @index: The index to be returned
 * Return:  node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int c = 0;
	dlistint_t *temp = head;

	for (c = 0; c < index; c++)
	{
		if (temp != NULL)
			temp = temp->next;
		return (NULL);
	}
	return (temp);
}
