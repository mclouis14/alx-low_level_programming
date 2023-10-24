#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes node at index of a listint_t linked list.
 * @head: pointer to the head of listint_t list
 * @index: index of the node to delete (starting at 0)
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *previous = NULL;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (previous != NULL)
	{
		previous->next = current->next;
	}
	else
	{
		*head = current->next;
	}
	free(current);
	return (1);
}
