#include "lists.h"

/**
 * sum_listint - sums all data in linked list
 * @head: head of linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *curNode;
	int total = 0;

	if (!head)
		return (0);

	curNode = head;

	while (curNode)
	{
		total += curNode->n;
		curNode = curNode->next;
	}

	return (total);
}
