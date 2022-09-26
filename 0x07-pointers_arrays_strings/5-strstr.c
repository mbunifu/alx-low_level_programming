#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: param
 * @needle: param
 * Return: pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int x;

	if (needle == NULL)
	{
		return (haystack);
	}
	while (*haystack)
	{
		x = 0;
		if (haystack[x] == needle[x])
		{
			do {
				if (needle[x + 1] != '\0')
				{
					x++;
				}
				else
					return (haystack);
			} while (haystack[x] == needle[x]);
		}
		haystack++;
	}
	return (NULL);
}
