#include "lists.h"

/**
 * add_dnodeint - Write a function what add a new
 * @head: is head
 * @n: is a count
 * Return: return node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
