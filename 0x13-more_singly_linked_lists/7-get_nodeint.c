#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the head of listint_t list
 * @index: index of the node, starting at 0
 * Return: pointer to the nth node or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int current_index = 0;

	while (current)
	{
		if (current_index == index)
			return (current);

		current = current->next;
		current_index++;
	}
	return (NULL);
}
