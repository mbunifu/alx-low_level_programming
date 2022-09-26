#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: initial segment
 * @accept: function param
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;

	unsigned int b = 0;

	while (*s)
	{
		int c = 0;

		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				c = 1;
				b++;
			}
		}
		if (c == 0)
			return (b);
		s++;
	}
	return (0);
}
