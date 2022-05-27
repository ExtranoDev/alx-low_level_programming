#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 * @head: double pointer to start of linked list
 * Return: a pointer to the first node of the reveresed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prvn;
  listint_t *n_node;

	while (*head)
	{
		n_node = (**head).next;
		(**head).next = prvn;
		prvn = *head;
		*head = n_node;
	}
	*head = prvn;
	return (*head);
}
