#include "lists.h"

/**
 * free_list -frees a list_t list.
 * @head: pointer
 */
void free_list(list_t *head)
{
	list_t *f;

	if (head != NULL)
	{
		f = head;
		head = head->next;
		free(f->str);
		free(f);
	}
}
