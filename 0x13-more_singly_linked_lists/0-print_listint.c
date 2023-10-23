#include "lists.h"

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: pointer to listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodecount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
