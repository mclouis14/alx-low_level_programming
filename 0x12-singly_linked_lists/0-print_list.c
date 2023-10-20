#include "lists.h"

/**
 * print_list - Prints all elements of list_t list.
 * @h: pointer to list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		node++;
		h = h->next;
	}

	return (node);
}
