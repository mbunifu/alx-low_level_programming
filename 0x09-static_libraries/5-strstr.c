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
	while (*haystack)
	{
		if (*haystack == *needle || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coincidence - define if the string b is inside a.
 * @a: source string
 * @b: string to be searched
 * Return: 1 if there is coincidence, otherwise 0.
 */

int coincidence(char *a, char *b)
{
	while (*b && *b == *a)
	{
		b++;
		a++;
	}
	if (*b == '\0')
		return (1);
	else
		return (0);
}
