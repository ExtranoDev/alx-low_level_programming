#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * Description: adds NULL to end of list
 * @head: head of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *curNode;

	if (!head)
		return;

	while (*head)
	{
		curNode = *head;
		*head = (*head)->next;
		free(curNode);
	}
}
