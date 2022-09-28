#include "main.h"

/**
 * factorial - returns the factorial
 * @n: function param int
 * Return: factorial of n else -1 if n < 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
