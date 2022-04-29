#include "main.h"

/**
 * is_palindrome - palindrome checker
 * @s: string
 * Return: palindrome status
 */
int is_palindrome(char *s)
{
	int n = 0, half;

	n = strlenChk(s, n);
	if (n % 2 != 0)
		half = n - 1;
	return (palindrome_process(s, n, half));
}

/**
 * palindrome_process - check if palindrome
 * @s: String
 * @i: integer
 * @j: half of the string
 * Return: status of string
 */
int palindrome_process(char *s, int i, int j)
{
	if (*s != s[i])
		return (0);
	else if (i == j)
		return (1);
	return (palindrome_process(s += 1, i -= 1, j));
}

/**
 * strlenChk - Check length of String
 * @s: String
 * @n: int
 * Return: length of string
 */
int strlenChk(char *s, int n)
{
	if (*s != '\0')
		n++;
	else
		return (n);
	return (strlenChk(s += 1, n));
}
