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
	int i, j, p = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				if (p == 0 || j < p)
				{
					p = j;
					break;
				}
			}
		}
	}
	if (p == 0)
		return ('\0');
	return (s + p);
}
