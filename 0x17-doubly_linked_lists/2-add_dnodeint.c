#include "lists.h"

/**
 * add_dnodeint - adds new node
 * @head: head of list
 * @n: int to be added
 *
 * Return: address of new added list or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *head_dup;

	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	head_dup = *head;

	if (head_dup)
	{
		while (head_dup->prev)
			head_dup = head_dup->prev;
	}
	new->next = head_dup;

	if (head_dup)
		head_dup->prev = new;

	*head = new;
	return (new);
}
