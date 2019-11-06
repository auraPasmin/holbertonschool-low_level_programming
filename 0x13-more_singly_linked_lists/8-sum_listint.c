#include "lists.h"
/**
 * sum_listint - returns the sum (n).
 * @head: listint_t
 * Return: sume.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
