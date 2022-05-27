#include "lists.h"

/**
 * print_listint - print elements of single linkedlist
 * @h: list
 *
 * Return: num of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_n = 0;
	const listint_t *curNode = h;

	while (curNode != NULL)
	{
		printf("%i\n", curNode->n);
		curNode = curNode->next;
		num_n++;
	}
	return (num_n);
}
