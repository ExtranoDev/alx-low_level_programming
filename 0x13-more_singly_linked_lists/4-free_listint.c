#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */

void free_listint(listint_t *head)
{
	listint_t *curNode;
	listint_t *nnode;

	curNode = head;

	while (curNode)
	{
		nnode = curNode->next;
		free(curNode);
		curNode = nnode;
	}
}
