#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: function parameter to be raised
 * @y: function parameter power
 * Return: x raised to the power of y, else -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	y--;
	x = x * _pow_recursion(x, y);
	return (x);
}
