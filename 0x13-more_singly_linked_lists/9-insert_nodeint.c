#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node position.
 * @head: listint_t
 * @idx: int
 * @n: n
 * Return: sum.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *copy, *new_node;

	i = 0;
	new_node = *head;
	copy = malloc(sizeof(listint_t));
	if (copy == NULL)
		return (NULL);

	copy->n = n;
	if (idx == 0)
	{
		copy->next = new_node;
		*head = copy;
		return (copy);
	}

	while (i < (idx - 1))
	{
		if (!new_node)
		{
			free(copy);
			return (NULL);
		}
		new_node = new_node->next;
		i++;
	}
	copy->next = new_node->next;
	new_node->next = copy;
	return (copy);
}
