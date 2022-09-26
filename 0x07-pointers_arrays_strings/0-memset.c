#include "main.h"

/**
 * _memset - fills the first n bytes of memory area pointed
 * by destination with constant byte b
 * @s: destination param
 * @b: source param
 * @n: size of bytes to fill
 * Return: a string pointer to destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	x = 0;
	while (a < n)
	{
		s[x] = b;
		a++;
	}
	return (s);
}
