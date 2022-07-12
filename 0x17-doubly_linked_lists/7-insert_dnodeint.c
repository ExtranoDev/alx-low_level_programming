#include "lists.h"

/**
 * insert_dnode_at_index - adds new node to anywhere in the list
 * @h: head of list
 * @idx: index of node to be added
 * @n: number to be added
 *
 * Return: address of new created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *head_dup;
	unsigned int i;

	if (!new)
		return (NULL);

	new->n = n;
	head_dup = *head;

	if (head_dup)
	{
		while (head_dup->prev)
			head_dup = head_dup->prev;
		for (i = 0; head; i++)
		{
			if (i == idx)
				break;
			head = head->next;
		}
		head->next = new
	}
	else
		*head = new;

	new->prev = head_dup;
	return (new);
}
