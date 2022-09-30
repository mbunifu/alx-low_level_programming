#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates the position of c in string s
 * @s: function param
 * @c: function param
 * Return: pointer to the first occurrence of the
 * character c in the string s, or NULL if the character is
 * not found
 */

char *_strchr(char *s, char c)
{
	if (*s == '\0')
		return ('\0');
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
