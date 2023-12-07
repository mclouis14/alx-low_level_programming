#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a Doubly linked list.
 * @h: Pointer to the head of the Doubly linked list
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elmt_count = 0;

	while (h != NULL)
	{
		h = h->next;
		elmt_count++;
	}

	return (elmt_count);
}
