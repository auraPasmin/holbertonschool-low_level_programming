#include "lists.h"

/**
 * reverse_listint - reverse a listint_t
 * @head: node
 * Return: node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *temp = NULL;

	if (!head || !*head)
		return (NULL);

	node = *head;
	*head = NULL;

	while (node)
	{
		temp = node->next;
		node->next = *head;
		*head = node;
		node = temp;
	}
	return (*head);
}
