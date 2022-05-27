#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list `listint_t`.
 * @h: linked list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num_n = 0;
	const listint_t *cur_n = h;

	while (cur_n)
	{
		cur_n = cur_n->next;
		num_n++;
	}
	return (num_n);
}
