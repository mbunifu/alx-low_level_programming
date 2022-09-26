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
	int a;

	if (*needle == NULL)
	{
		return (haystack);
	}
	while (*haystack)
	{
		a = 0;
		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] != '\0')
				{
					a++;
				}
				else
				{
					return (haystack);
				}
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return (NULL);
}
