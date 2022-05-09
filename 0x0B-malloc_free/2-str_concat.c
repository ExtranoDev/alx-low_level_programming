#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatinates strings
 * @s1: string
 * @s2: string
 *
 * Return: string
 */
char *str_concat(char *s1, char *s2)
{
	int i1 = 0, i2 = 0;

	if (s1 == NULL)
	{
		i1 = -1;
		s1 = "";
	}
	else if (s2 == NULL)
	{
		i2 = -1;
		s2 = "";
	}
	if (i1 != -1)
	{
		i1 = countLen(s1);
	}
	if (i2 != -1)
	{
		i2 = countLen(s2);
	}
	return (rrconcat(s1, s2, i1, i2));
}

/**
 * rrconcat - concatenate string
 * @s1: first string
 * @s2: second string
 * @n1: length of first string
 * @n2: length of second string
 * Return: concatenated string
 */
char *rrconcat(char *s1, char *s2, int n1, int n2)
{
	char *i;
	int count = 0, temp;

	temp = n1 + n2 + 1;
	i = malloc(temp * sizeof(char));
	if (i == NULL)
		return ('\0');
	if (n1 != -1)
		for (temp = 0; (i[count] = s1[temp]) != '\0'; ++temp, ++count)
			;
	if (n2 != -1)
		for (temp = 0; (i[count] = s2[temp]) != '\0'; ++temp, ++count)
			;
	i[count] = '\0';
	return (i);
}

/**
 * countLen - count length of a string
 * @s: string
 * Return: length
 */
int countLen(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
		;
	return (n);
}
