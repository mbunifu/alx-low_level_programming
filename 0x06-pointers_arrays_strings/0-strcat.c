#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: destination
 * @src: source
 * Return: pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)

	for (b = 0; src[j] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
