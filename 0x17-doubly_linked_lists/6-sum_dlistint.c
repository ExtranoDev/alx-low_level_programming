#include "lists.h"

/**
 * sum_dlistint - get the sum of all element in list
 * @head: head of list
 *
 * Return: Sum of all integer values
 */
int sum_dlistint(dlistint_t *head)
{
	int i, sum;

	if (!head)
		return (0);
	while (head->prev)
		head = head->prev;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
