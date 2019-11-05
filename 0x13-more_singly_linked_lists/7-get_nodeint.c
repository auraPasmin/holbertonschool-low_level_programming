#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: listing
 * @index: unsigned int
 * Return: head node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i;
	i = index;
	
	if (*head != NULL)
	{

		while ( i < index)
		{
			head = head->next;
			i--;
		}
		return (head);
	}
	return (0);
 }
