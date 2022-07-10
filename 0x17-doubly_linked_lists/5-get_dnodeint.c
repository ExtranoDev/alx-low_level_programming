#include "lists.h"

/**
 * get_dnodeint_at_index - gets a values at list index
 * @head: head of list
 * @index: position of value to access
 *
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head)
		return (NULL);
	while (head->prev)
		head = head->prev;

	for (i = 0; head; i++)
	{
		if (i == index)
			break;
		head = head->next;
	}
	return (head);
}
