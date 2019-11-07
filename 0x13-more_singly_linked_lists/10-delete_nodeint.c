#include "lists.h"
/**
 * delete_nodeint_at_index - inserts a new node position.
 * @head: listint_t
 * @index: int
 * Return: 0.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *copy, *new_node;

	i = 0;
	new_node = *head;
	copy = malloc(sizeof(listint_t));
	if (copy == NULL)

		if (index == 0)
		{
			copy->next = new_node;
			*head = copy;
		}

	while (i < (index - 1))
	{
		if (!new_node)
		{
			free(copy);
		}
		new_node = new_node->next;
		i++;
	}
	copy->next = new_node->next;
	new_node->next = copy;
	return (0);
}
