#include "lists.h"

/**
 * list_len - Returns number of elements in linked list_t list.
 * @h: pointer to list_t list
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t element_count = 0;

	while (h != NULL)
	{
		element_count++;
		h = h->next;
	}

	return (element_count);
}

