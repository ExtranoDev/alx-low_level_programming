#include "main.h"

/**
 * leet - change str to upper
 * @s: string
 *
 * Return: s
 */
char *leet(char *s)
{
	int x, y;
	char low[] = "aeoti";
	char up[] = "AEOTL";
	char nums[] = "43071";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == ' ')
			continue;

		for (y = 0; low[y] != '\0' && up[y] != '\0'; y++)
		{
			if (s[x] == low[y] || s[x] == up[y])
			{
				s[x] = nums[y];
				break;
			}
		}
	}
	return (s);
}
