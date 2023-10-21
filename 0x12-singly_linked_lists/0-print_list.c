#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of list_t list.
 * @h: pointer to list_t list
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t m = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		m++;
	}

	return (m);
}
