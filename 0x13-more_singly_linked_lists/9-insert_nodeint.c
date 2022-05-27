#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a specified index.
 * @head: head of linked list
 * @idx: index
 * @n: new node data
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curNode;
	listint_t *n_node;

	if (!head)
		return (0);
	n_node = malloc(sizeof(listint_t));
	if (!n_node)
		return (0);

	n_node->next = NULL;
	n_node->n = n;

	if (idx == 0)
	{
		n_node->next = *head;
		(*head) = n_node;
		return (n_node);
	}

	curNode = *head;

	while (idx != 1)
	{
		curNode = curNode->next;
		--idx;
		if (!curNode)
		{
			free(n_node);
			return (NULL);
		}
	}
	n_node->next = curNode->next;
	curNode->next = n_node;

	return (n_node);
}
