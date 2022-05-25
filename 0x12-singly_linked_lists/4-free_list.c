#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of lis
 */
void free_list(list_t *head)
{
	list_t *pstr;
	list_t *new;

	pstr = head;

	while (pstr)
	{
		new = pstr->next;
		free(pstr->str);
		free(pstr);
		pstr = new;
	}
}
