#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @t: function param
 * Return: encoded string
 */

char *leet(char *t)
{
	int a = 0, num[5] = {4, 3, 0, 1, 7}, y = 0;
	char array[10] = "AaEeOoLlTt";

	for (; t[a]; a++)
	{
		for (y = 0; (t[a] != array[y] && y < 10); y++)
			;
		if (t[a] == array[y])
		{
			y /= 2;
			t[a] = (num[y] + '0');
		}
	}
	return (t);
}
