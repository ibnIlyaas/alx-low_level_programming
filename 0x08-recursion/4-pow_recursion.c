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
	int power;

	if (y < 0)
	{
		return (-1);
	}
	power = pow(x,y);
	return (power);
}
