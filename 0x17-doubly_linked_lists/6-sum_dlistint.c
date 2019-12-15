#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum
 * @head: A pointer to the first node
 * Return: The result of the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int entire = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		entire = entire + temp->n;
		temp = temp->next;
	}
	return (entire);
}
