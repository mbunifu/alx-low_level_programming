#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to the destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int q;
	int p;

	p = 0;
	q = 0;
	while (dest[p])
	{
		q++;
		p++;
	}
	for (p = 0; p < n && src[p] != '\0'; p++)
	{
		dest[q + p] = src[p];
	}
	dest[q + p] = '\0';
	return (dest);
}
