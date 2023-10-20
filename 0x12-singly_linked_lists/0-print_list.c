#include "lists.h"

/**
 * print_list - Prints all elements of list_t list.
 * @h: pointer to list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%ld] (nil)\n", node_count);
		}
		else
		{
			printf("[%ld] %s\n", node_count, h->str);
		}
		h = h->next;
		node_count++;
	}
	return (node_count);
}
