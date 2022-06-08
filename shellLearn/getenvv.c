#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "linkedPath.h"

char *_getenv(const char *name);
void printDir(char *dir);
void linkPath(list_p **h, char *dir);
void add_to_list(list_p **h, char *str);
int _setenv(const char *name, const char *value, int overwrite);

/**
 * main - tests my getenv
 *
 * Return: 0 on success
 */
int main()
{
	char *val = "PATH";
	char *envv = _getenv(val);
	list_p *head = NULL;
	int i = 0;

	printf("%s: %s\n\n", val, envv);
	printDir(envv);
	linkPath(&head, envv);

	while (head)
	{
		printf("DIR [%d]: %s\n", i, head->path);
		i++;
		head = head->next;
	}

	return (0);
}

/**
 * linkPath - links provided path
 * @h: address of the head node
 * @dir: all dir in a string
 */
void linkPath(list_p **h, char *dir)
{
	int i, j;
	char str[999];
	list_p *new;

	for (i = 0, j = 0; dir[i]; i++, j++)
	{	
		if (dir[i] == ':')
		{
			str[j] = '\0';
			add_to_list(h, str);
			j = -1;
			continue;
		}
		str[j] = dir[i];
	}
	str[j] = '\0';
	add_to_list(h, str);
}

/**
 * add_to_list - adds a node to a linked list
 * @h: address of lastest node in the list
 * @str: string/path to be added
 */
void add_to_list(list_p **h, char *str)
{
	list_p *new;

	new = (list_p *) malloc(sizeof(list_p));
	new->path = strdup(str);
	new->next = *h;
	*h = new;
}

/**
 * printDir - prints each dir in a PATH
 * @dir: path directories
 */
void printDir(char *dir)
{
	int i;

	if (!dir)
		exit(EXIT_FAILURE);

	for (i = 0; dir[i]; i++)
	{
		if (dir[i] == ':')
		{
			putchar('\n');
			continue;
		}
		putchar(dir[i]);
	}
	putchar('\n');
}

/**
 * _getenv - function gets the path of an environment variable
 * @name: variable name
 *
 * Return: address to variable path
 */
char *_getenv(const char *name)
{
	int i, j;
	int is_equal;
	extern char **environ;

	if (!name)
		return (NULL);

	for (i = 0; environ[i] != NULL; i++)
	{
		is_equal = 1;
		for (j = 0; environ[i][j] != '='; j++)
		{
			if (name[j] != environ[i][j])
			{
				is_equal = 0;
				break;
			}
		}
		if (is_equal)
			return (&environ[i][j + 1]);
	}
	return (NULL);
}
/*
int _setenv(const char *name, const char *value, int overwrite)
{
	char *path;
	if (!name || !value)
		return (-1);
	if (path = _getenv(name) != NULL)
	{
		if (overwrite > 0)
	}	*/
