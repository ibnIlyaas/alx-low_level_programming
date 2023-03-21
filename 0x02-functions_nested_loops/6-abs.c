#include "main.h"
#include <stdlib.h>
#include <math.h>
/**
 * _abs - computes absolute values
 * @n: parameter
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (-n);
	return (0);
}
