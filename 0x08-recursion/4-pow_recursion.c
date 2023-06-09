#include "main.h"

/**
 * _pow_recursion - finds power of x to y
 * @x: Base
 * @y: Exponent
 * Return: -1 if exponent is negative else x power y
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	res = x * _pow_recursion(x, y - 1);
	return (res);
}
