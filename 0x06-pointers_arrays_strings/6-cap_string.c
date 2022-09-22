#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: function param
 * Return: string
 */

char *cap_string(char *s)
{
	int a = 0;
	int b;
	int c = 0;

	while (s[a])
	{
		c++;
		a++;
	}
	for (a = 0; a < c; a++)
	{
		if (s[a] > 96 && s[a] < 123)
		{
			b = s[a - 1];
			if (a == 0 || b == '\n' || b == '\t' || b == 32 || b == 33 || b == 34)
			{
				s[a] = s[a] - 32;
			}
			else if (b == 40 || b == 41 || b == 44 || b == 46)
				s[a] = s[a] - 32;
			else if (b == 59 || b == 63 || b == 123 || b == 125)
				s[a] = s[a] - 32;
		}
		return (s);
	}
}
