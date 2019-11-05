#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: number new node.
 * Return: the direction to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *co, *actual = *head;

	co = malloc(sizeof(listint_t));

	if (co == NULL)
		return (NULL);

	co->n = n;
	co->next = NULL;

	if (*head == NULL)
		*head = co;
	else
	{
		while (actual->next != NULL)
			actual = actual->next;
		actual->next = co;
	}
	return (co);
}
