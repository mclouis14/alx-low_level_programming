#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *now;

	while (head)
	{
		now = head->next;
		free(head->str);
		free(head);
		head = now;
	}
}
