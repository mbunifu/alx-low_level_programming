#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string being reversed
 */

void rev_string(char *s)
{
	int a;
	int b;
	int c, d;

	b = 0;
	while (s[a] != '\0')
		a++;
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
