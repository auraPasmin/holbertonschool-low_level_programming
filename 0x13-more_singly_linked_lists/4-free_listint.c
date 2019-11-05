#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: listint_t
 * Return: number nodes.
 */
void free_listint(listint_t *head)
{
	listint_t *co;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			co = head->next;
			free(head);
			head = co;
		}
		free(head);
	}
}
