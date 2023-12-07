#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a Doubly linked list.
 * @head: Pointer to the head of the Doubly linked list.
 * @index: The index of the node, starting from 0.
 *
 * Return: Pointer to the nth node, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL && i < index; i++)
	{
		head = head->next;
	}

	if (i == index && head != NULL)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
