#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a
 * new node.
 * @head: Node
 * @n: Counert
 * Return: Node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		new->prev = temp;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
