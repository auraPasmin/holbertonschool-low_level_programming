#include "lists.h"
/**
 * add_node_end - creates a new node at the end
 * @head: reference to the head;
 * @str: is the string
 * Return: a node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n, *actual = *head;

	int i = 0;

	n = malloc(sizeof(n));

	if (n == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n->str = strdup(str);
	n->len = i;
	n->next = NULL;

	if (*head != NULL)
	{
		while (actual->next != NULL)
			actual = actual->next;
		actual->next = n;
	}
	else
	{
		*head = n;
	}
	return (n);
}
