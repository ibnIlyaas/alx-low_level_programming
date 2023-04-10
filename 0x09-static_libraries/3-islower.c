#include "main.h"
#include <ctype.h>
/**
 *_islower - checks if an alphabet is lowercase
 *@c: integer parameter
 * Return: Always c (success)
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
