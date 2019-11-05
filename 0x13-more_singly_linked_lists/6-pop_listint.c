#include "lists.h"
/**
 * pop_listint -  deletes the firts node
 * @head: list_t
 * Return: firt node data.
 */
int pop_listint(listint_t **head)
{
	int temp;
	listint_t *copia;

	if (head != NULL)
	{
		copia = *head;
		temp = copia->temp;
		*head = copia->next;
		free(copia);
		return (temp);
	}
	return (0);
}
