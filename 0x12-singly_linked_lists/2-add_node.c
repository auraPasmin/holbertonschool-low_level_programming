#include "lists.h"

/**
 * add_node - prints all the elements
 * @head: list_t
 * @str: char
 * Return:  nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t	*co = malloc(sizeof(list_t));

	if (co == NULL)
		return (NULL);

	for (i =0; str[i] != '\0'; i++)
		;

	co->str = strdup(str);
	co->len = i;
	co->next = *head;
	*head = co;

	return (*head);
}
