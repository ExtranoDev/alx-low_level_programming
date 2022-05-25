#include "lists.h"
#include <string.h>

/**
 * *add_node - add node to head of linked list
 * @head: linked list head
 * @str: string of the linked list
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nnode;
	int str_len;

	nnode = (list_t *) malloc(sizeof(list_t));

	if (!nnode)
	{
		free(nnode);
		return (NULL);
	}

	nnode->str = strdup(str);
	if (nnode->str == NULL)
	{
		free(nnode);
		return (NULL);
	}
	for (str_len = 0; str[str_len];  str_len++)
	;

	nnode->len = str_len;
	nnode->next = *head;
	*head = nnode;

	return (nnode);
}
