#include "lists.h"

/**
 * dlistint_len - returns size of a double linked list
 * @h: head of list
 *
 * Return: size of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *hold = h;

	if (!h)
		return (0);
	for (i = 0; hold; i++)
		hold = hold->next;
	return (i);
}
