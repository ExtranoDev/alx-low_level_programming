#include "lists.h"
#include <stdio.h>

/**
 * print_list - print elements of linkedlist
 * @h: list
 *
 * Return: num of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nbr_nodes = 0;
	const list_t *pstr = h;

	while (pstr)
	{
		printf("[%d] %s\n", pstr->len, pstr->str != NULL ? pstr->str : "(nil)");
		pstr = pstr->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}
