#include "lists.h"

/**
 * add_nodeint_end - add node to end of list
 * @head: to print
 * @n: string for new node
 *
 * Return: new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curNode;
	listint_t *new_n;

	curNode = *head;
	while (curNode && curNode->next)
		curNode = curNode->next;

	new_n = malloc(sizeof(listint_t));
	if (!new_n)
	{
		free(new_n);
		return (NULL);
	}
	new_n->n = n;
	new_n->next = NULL;

	if (curNode)
		curNode->next = new_n;
	else
		*head = new_n;
	return (new_n);
}
