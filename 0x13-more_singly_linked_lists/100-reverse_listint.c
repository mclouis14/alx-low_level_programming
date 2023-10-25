#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: pointer to the head of the listint_t list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}

	*head = current;

	return (*head);
}
