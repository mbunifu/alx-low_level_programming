#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string including the null byte to the buffer
 * @src: points to a string
 * @dest: points to the buffer
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (a >= 0)
	{
		dest[a] = src[a];
		if (src[a] == '\0')
			return (dest);
		a++;
	}
	return (dest);
}
