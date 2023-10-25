#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: pointer to head of the linked list
 * Return: address of the node where loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sloth = head;
	listint_t *cheetah = head;

	while (cheetah != NULL && cheetah->next != NULL)
	{
		sloth = sloth->next;
		cheetah = cheetah->next->next;

		if (sloth == cheetah)
		{
			break;
		}
	}

	if (cheetah == NULL || cheetah->next == NULL)
	{
		return (NULL);
	}

	sloth = head;

	while (sloth != cheetah)
	{
		sloth = sloth->next;
		cheetah = cheetah->next;
	}

	return (cheetah);
}
