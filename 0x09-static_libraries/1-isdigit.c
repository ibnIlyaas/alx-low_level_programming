#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks if parameter is a digit
 * @c: parameter to be inputed
 * Return: 0 or 1 depending on the condition
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
