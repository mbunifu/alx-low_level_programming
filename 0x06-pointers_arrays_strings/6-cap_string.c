#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: function param
 * Return: string
 */

char *cap_string(char *s)
{
	char *sep = " \t\n,;.!?\"(){}";
	int a = 0, b = 0, c = 1, d = 0;

	for (; s[a]; a++)
	{
		for (; b < a; b++)
		{
			if (s[b] >= 'A' && s[b] <= 'Z')
				c = 0;
			if ((s[b] >= 'a' && s[b] <= 'z') && c == 1)
			{
				s[b] = ((s[b] - 'a') + 'A');
				c = 0;
			}
			for (d = 0; sep[d]; d++)
				if (s[b] == sep[d])
				{
					c = 1;
					if (!(s[b + 1] <= 'z' && s[b + 1] >= 'a'))
						c = 0;
				}
		}
	}
	return (s);
}
