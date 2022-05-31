#include "lists.h"
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes a node at any specified index
 * @head: head of linked list
 * @index: index
 * Return: 1 success, -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *curNode;
	listint_t *tNode;

	if (!head || !(*head))
		return (-1);

	curNode = *head;
	if (index == 0)
	{
		if ((*head)->next)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(curNode);
		return (1);
	}

	while (index != 1)
	{
		if (curNode->next == NULL)
			return (-1);

		curNode = curNode->next;
		--index;
	}
	tNode = curNode->next;
	if (curNode->next->next)
		curNode->next = curNode->next->next;
	else
		curNode->next = NULL;
	free(tNode);

	return (1);
}
