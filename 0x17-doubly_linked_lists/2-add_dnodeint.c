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
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head->prev
	*head->prev = new;
	return (*head);
}
