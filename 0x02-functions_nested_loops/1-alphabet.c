#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always (0) Success
 *
 */
void print_alphabet(void)
{
	char lowers;

	for (lowers = 'a'; lowers <= 'z'; lowers++)
		_putchar(lowers);
	_putchar('\n');
}
