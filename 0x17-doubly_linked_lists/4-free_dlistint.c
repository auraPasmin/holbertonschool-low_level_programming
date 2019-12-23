#include "lists.h"

/**
 * free_dlistint - Function that frees the elements of a doubly linked
 * @head: node pointer
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(head);
	}
	free(temp);
}
