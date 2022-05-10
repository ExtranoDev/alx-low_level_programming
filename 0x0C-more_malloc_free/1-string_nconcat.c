#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - return allocated memory
 * @s1: string
 * @s2: string
 * @n: number
 *
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int l1 = 0, l2 = 0, i, j = 0;

	if (s2 != NULL)
	{
		for (l2 = 0; s2[l2] != '\0'; l2++)
		{
		}
	}

	if (s1 != NULL)
	{
		for (l1 = 0; s1[l1] != '\0'; l1++)
		{
		}
	}

	if (n >= l2)
		n = l2;

	str = malloc((l1 + n + 1) * sizeof(char));

	if (str == NULL)
		return ('\0');

	if (l1 != 0)
	{
		for (i = 0; (str[j] = s1[i]) != '\0'; i++, j++)
		{
		}
	}
	if (l2 != 0)
	{
		for (i = 0; i < n; i++, j++)
			str[j] = s2[i];
	}

	str[j] = '\0';
	return (str);
}
