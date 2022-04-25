#include "main.h"

/**
 * *cap_string - change str to upper
 * @s: string
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int x, y;
	int sens = 0;
	char nt[] = ",;.!?(){}\n\t\" ";

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[0] > 96 && s[0] < 123)
			sens = 1;

		for (y = 0; nt[y] != '\0'; y++)
		{
			if (nt[y] == s[x])
				sens = 1;
		}

		if (sens == 1)
		{
			if (s[x] > 96 && s[x] < 123)
			{
				s[x] -= 32;
				sens = 0;
			}
			else if (s[x] > 64 && s[x] <91)
				sens = 0;
			else if (s[x] > 47 && s[x] < 58)
				sens = 0;
		}
	}

	return (s);
}
