#include "main.h"

/**
 * _puts - prints a string
 * @str: string being printed
 * Return: Always 0.
 */

void _puts(char *str)
{
	int k;

	k = 0;
	while (str[i] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
