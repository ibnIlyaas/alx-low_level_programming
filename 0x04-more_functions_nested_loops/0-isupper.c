#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks for uppercase
 * @c: parameter
 *
 *Return: 0 or 1 depending on condition
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
