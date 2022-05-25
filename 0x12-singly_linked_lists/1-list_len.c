#include "lists.h"
#include <stdio.h>

/**
 * list_len -  gets number of element in link list
 * @h: linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nbr_element = 0;
	const list_t *pstr = h;

	while (pstr != NULL)
	{
		pstr = pstr->next;
		nbr_element++;
	}
	return (nbr_element);
}
