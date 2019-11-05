#include "lists.h"

/**
 * add_nodeint - prints all the elements
 * @head: list_t
 * @n: char
 * Return:  nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *co = malloc(sizeof(listint_t));

	if (co == NULL)
		return (NULL);
	co->n = n;
	co->next = *head;
	*head = co;

	return (*head);
}
