#include "lists.h"

/**
 * insert_dnodeint_at_index - adds new node to anywhere in the list
 * @h: head of list
 * @idx: index of node to be added
 * @n: number to be added
 *
 * Return: address of new created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head_dup;
	unsigned int i;

	if (!h)
		return (NULL);

	head_dup = *h;
	if (head_dup)
	{
		for (i = 0; i != idx; i++)
		{
			head_dup = head_dup->next;
			if (!head_dup)
				return (NULL);
		}
		new = malloc(sizeof(dlistint_t));
		if (!new)
		{
			free(new);
			return (NULL);
		}
		new->n = n;
		new->next = head_dup;
		new->prev = head_dup->prev;
		if (head_dup->prev)
			head_dup->prev->next = new;
		else if (idx == 0)
			head_dup->prev = new;
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
	}

	return (new);
}
