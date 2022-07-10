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
	dlistint_t *temp = head;
	unsigned int i;
	
	if (!head)
		return (NULL);
	if (temp)
	{
		while(temp->prev)
			temp = temp->prev;
	}
	for (i = 0; i <= index - 1; i++)
		temp = temp->next;
	return (temp);
}
