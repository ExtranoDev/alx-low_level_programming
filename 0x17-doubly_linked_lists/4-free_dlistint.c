#include "lists.h"

/**
 * free_dlistint - frees a double linked list
 * @head: head of list
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head->prev)
	{
		while (head->prev)
			head = head->prev;
	}
	while ((temp = head))
	{
		head = temp->next;
		free(temp);
	}
}
