#include "main.h"

/**
 * _sqrt_recursion - function entry point
 *  @n: function param
 *  Desc: returns the natural square root of a number
 *  Return: natural square root of n or -1 if n doesn't have one
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (validate_sqrt(1, n));
}

/**
 * validate_sqrt - function entry point
 * @a: function param
 * @b: function param
 * Desc: checks if sqr of x == y
 * Return: square of x else -1
 */

int validate_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	else if (a * a > b)
		return (-1);
	return (validate_sqrt((a + 1), b));
}
