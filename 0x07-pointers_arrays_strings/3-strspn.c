#include "main.h"

/**
 * _strspn - checks and compares strings
 * @s: string
 * @accept: string
 *
 * Return: number
 */
unsigned int *_strspn(char *s, char accept)
{
	int i, j, x = 0, y = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				x++;
				break
			}
			else
				x = 0
		}
		if (x == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				y++;
				break;
			}
		}
	}
	return (y);
}
