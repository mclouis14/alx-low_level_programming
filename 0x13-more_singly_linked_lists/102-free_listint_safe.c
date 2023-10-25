#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: pointer to a pointer to the head of the listint_t list
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t amt = 0;
	listint_t *temp;
	int x;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			amt++;
		}
		else
		{
			free(*h);
			*h = NULL;
			amt++;
			break;
		}
	}

	*h = NULL;

	return (amt);
}
