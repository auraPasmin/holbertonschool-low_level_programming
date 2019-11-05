#include "lists.h"

/**
 * get_nodeint_at_index - nth node
 * @head: node
 * @index: count
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int i = 0;

	n = head;
	if (head != NULL)
	{
	while (n && i < index)
	{
		n = n->next;
		i++;
	}
	return (n);
	}
	return (0);
}
