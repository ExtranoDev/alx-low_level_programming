#include <stdio.h>
#include <stdlib.h>

/**
 * struct list_p - linked list of path
 * @path: path string
 * @next: points to the next node
 */
typedef struct list_p
{
	char *path;
	struct list_p *next;
} list_p;


typedef struct list_a
{
	int a;
	struct list_a *next;
} list_a;
