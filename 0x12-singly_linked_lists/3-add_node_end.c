#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - add node to end of linked list
 * @head: str to print
 * @str: str for the new node
 *
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *pstr;
	list_t *nnode;
	int c;

	pstr = *head;
	while (pstr && pstr->next != NULL)
		pstr = pstr->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	nnode = malloc(sizeof(list_t));
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
	nnode->len = c;
	nnode->next = NULL;

	if (pstr)
		pstr->next = nnode;
	else
		*head = nnode;
	return (nnode);
}
