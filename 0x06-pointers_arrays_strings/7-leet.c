#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: function param
 * Return: encoded string
 */

char *leet(char *s)
{
	int a;
	int b;
	char *array_a = "aAeEoOtTlL";
	char *array_b = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
	{
		b = 0;
		while (b < 10)
		{
			if (s[a] == array_a[b])
				s[a] = array_a[b];
			b++;
		}
	}
	return (s);
}
