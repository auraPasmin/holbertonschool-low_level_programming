#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index
 * @h: Head pointer
 * @idx: Index
 * @n: Value
 * Return: Node or NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *node;
	unsigned int i = 0;

	temp = *h;

	if (h == NULL || (temp == NULL && idx != 0))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	while (temp != NULL)
	{
		if (idx == i)
		{
			node->prev = temp->prev;
			node->next = temp;
			(temp->prev)->next = node;
			temp->prev = node;
			return (node);
		}
		if ((idx - 1) == i && temp->next == NULL)
			return (add_dnodeint_end(h, n));
		temp = temp->next;
		i++;
	}
	free(node);
	return (NULL);
}
