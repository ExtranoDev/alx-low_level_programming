#include "lists.h"

/**
 * *add_nodeint - adds a node head of linked list
 * @head: linked list head
 * @n: num to add
 * Return: number of elements
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	new_n = (listint_t *) malloc(sizeof(listint_t));

	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;

	new_n->next = *head;
	*head = new_n;

	return (new_n);
}
