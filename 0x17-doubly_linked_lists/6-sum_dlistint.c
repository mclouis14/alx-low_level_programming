#include "lists.h"

/**
 * sum_dlistint - Returns the sum off all the data (n) of a Doubly linked list.
 * @head: Pointer to the head of the Doubly linked list.
 * Return: Sum off all the data in the list. if list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
