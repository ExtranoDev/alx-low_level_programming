#include "main.h"

/**
 * _strpbrk - checks for first occurence of letter
 * @s: string
 * @accept: string
 *
 * Return: number
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, p = 999;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j] && j < p)
			{
				p = j;
				break;
			}
		}
	}
	return (s + p);
}
