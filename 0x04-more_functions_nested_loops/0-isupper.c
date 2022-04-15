#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: int char
 * Return: Always return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else if (c >= 'a' && c <= 'b')
		return (0);
	
	return (0);
}
