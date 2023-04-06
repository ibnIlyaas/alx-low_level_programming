#include "main.h"
#include <math.h>

/**
 * _pow_recursion - print the power of an int to another
 * @x: int param
 * @y: int param
 * Return: -1 or power
 */

int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (x == 1)
	{
		return (1);
	}
	z = (_pow_recursion(x, y - 1) * x);
	return (z);
}
