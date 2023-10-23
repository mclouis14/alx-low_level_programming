#include "lists.h"

/**
 * add_nodeint - Adds new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: integer value to be stored in the new node
 * Return: the address of the new element (new head), or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
