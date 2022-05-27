#include "lists.h"

/**
 * pop_listint - deletes head of linked list 
 * @head: head of linked list
 * Return: the head node’s data
 */

int pop_listint(listint_t **head)
{
	listint_t *curNode;
	int num;

	if (!head)
		return (0);

	curNode = *head;
	if (!curNode)
		return (0);

	num = curNode->n;
	*head = curNode->next;
	free(curNode);
	return (num);
}
