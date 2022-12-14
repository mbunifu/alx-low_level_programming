#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function entry point
 * @str: function param, pointer to string
 * Desc: returns a pointer to a newly allocated
 * space in memory
 * Return: pointer to new str or NUL
 */

char *_strdup(char *str)
{
	char *s;
	int x = 0;
	int len;

	if (str == NULL)
		return (NULL);
	while (str[x])
	{
		x++;
		len++;
	}
	s = malloc(sizeof(*str) * (len + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	x = 0;
	while (str[x])
	{
		s[x] = str[x];
		x++;
	}
	s[x] = '\0';
	return (s);
}
