#include "lists.h"

/**
 * add_dnodeint_end - adds new node to end of list
 * @head: head of list
 * @n: int to be added
 *
 * Return: address of new added list or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *head_dup;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;
	head_dup = *head;

	if (head_dup)
	{
		while (head_dup->next)
			head_dup = head_dup->next;
		head_dup->next = new;
	}
	else
		*head = new;

	new->prev = head_dup;
	return (new);
}
