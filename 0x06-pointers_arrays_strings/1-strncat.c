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
	int q = 0;

	while (q < n && src[q] != '\0')
	{
		dest[q] = src[q];
	}
	while (q < n)
	{
		dest[q] = '\0';
	}
	return (0);
}
