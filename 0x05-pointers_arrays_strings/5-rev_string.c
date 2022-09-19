#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string being reversed
 */

void rev_string(char *s)
{
	int a, b, c, d;

	while (s[a] != '\0')
		a++;
	b = 0;
	c = a - 1;

	while (b < c)
	{
		d = s[b];
		s[b] = s[c];
		s[c] = d;
		b++;
		c--;
	}
}
