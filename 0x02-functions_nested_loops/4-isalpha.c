#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character being tested
 * Return: Always (0) successs
 */
int _isalpha(int c)
{
	for ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
