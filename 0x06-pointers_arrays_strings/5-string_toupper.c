#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @s: pointer variable
 * Return: string array
 */

char *string_toupper(char *s)
{
	int a;
	int b;

	a = 0;
	b = 0;

	while (s[a])
	{
		a++;
		b++;
	}
	for (a = 0; a <= b; a++)
	{
		if (s[a] > 96 && s[a] < 123)
		{
			s[a] = s[a] - 32;
		}
	}
	return (s);
}
