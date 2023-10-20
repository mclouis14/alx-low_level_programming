#include "lists.h"

/**
 * add_node - Adds new node at the beginning of list_t list.
 * @head: double pointer to list_t list
 * @str: needs to be duplicated
 * Return: the address on the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *a_node;

	while (str[len])
	{
		len++;
	}
	a_node = malloc(sizeof(list_t));

	if (!a_node)
	{
		return (NULL);
	}
	a_node->str = strdup(str);
	a_node->len = len;
	a_node->next = *head;
	*head = a_node;

	return (*head);
}
