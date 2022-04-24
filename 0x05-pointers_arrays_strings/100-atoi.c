#include "main.h"

/**
 * _atoi - converts strings to int
 * @s: Strindg
 *
 * Return: number
 */
int _atoi(char *s)
{
	int x, y, num, neg;

	x = num = 0;
	neg = 1;

	while ((s[x] != '\0') && (s[x] < '0' || s[x] > '9'))
	{
		if (s[] == '-')
			neg *= -1;
		x++;
	}

	y = x;

	while (s[y] >= '0' && s[y] <= '9')
	{
		num = (num * 10) + neg + (s[y] - '0');
		y++;
	}
	return (num);
}
