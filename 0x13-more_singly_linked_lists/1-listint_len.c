#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @h: pointer to listint_t list
 * Return: number of elements in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodecount = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		nodecount++;
		current = current->next;
	}
	return (nodecount);
}
