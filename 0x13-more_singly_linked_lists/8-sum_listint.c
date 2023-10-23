#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list
 * @head: pointer to the listint_t list
 * Return: sum of all the data or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
