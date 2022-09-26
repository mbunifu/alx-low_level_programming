#include "main.h"

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 * @s: function param
 * @accept: function param
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0; s[a]; a++)
	{
		y = 0;
		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
			b++;
		}
	}
	return (NULL);
}
