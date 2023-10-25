#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: pointer to the head of the listint_t list
 * Return: number of the nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t amt = 0;
	size_t new;
	const listint_t *temp = NULL;
	const listint_t *lite = NULL;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		amt++;
		temp = temp->next;
		lite = head;
		new = 0;
		while (new < amt)
		{
			if (temp == lite)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (amt);
			}
			lite = lite->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (amt);
}
