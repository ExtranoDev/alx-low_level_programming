#include "lists.h"

/**
 * get_nodeint_at_index - retrieve specified node value
 * @head: head of linked list
 * @index: node to access
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curNode;

	if (!head)
		return (0);

	curNode = head;

	while (index != 0)
	{
		curNode = curNode->next;
		index--;
		if (!curNode)
			return (0); /*Not specified*/
	}

	return (curNode);
}
