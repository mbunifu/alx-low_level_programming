#include "main.h"

/**
 * _strncpy - function entry point
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 * Desc: a function that copies a string
 * Return: pointer to  string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[x] != '\0'; a++)
		dest[a] = src[a];
	for (; a < n; a++)
		dest[a] = '\0';
	return (dest);
}
