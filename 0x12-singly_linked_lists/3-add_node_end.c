#include "lists.h"

/**
 * add_node_end - Adds new node at the ends of a list_t list.
 * @head: double pointer to list_t list
 * @str: needs to be duplicated
 * Return: address of new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a_node;
	list_t *current = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	a_node = malloc(sizeof(list_t));
	if (!a_node)
		return (NULL);

	a_node->str = strdup(str);
	a_node->len = len;
	a_node->next = NULL;

	if (*head == NULL)
	{
		*head = a_node;
		return (a_node);
	}
	while (current->next)
		current = current->next;
	current->next = a_node;

	return (a_node);
}
