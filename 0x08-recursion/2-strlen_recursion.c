#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string parameter
 * Return: void
 */

int _strlen_recursion(char *s)
{
	unsigned int l;

	l = 1;
	if (*s == '\0')
	{
		return (0);
	}
	return (l + _strlen_recursion(s + 1));
}
