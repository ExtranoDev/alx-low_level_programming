#include "main.h"

/**
 * _strlen - finds len of string
 * @s: string
 *
 * Return: Always length
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s[i] != '\0'; ++i);
	return (i);
}
