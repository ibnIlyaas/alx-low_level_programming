#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string param
 */

void print_rev(char *s)
{
	int len = 0;
	int rv;

	while (*s != '\0')
	{
		len++;
		++s;
	}
	s--;

	for (rv = len; rv > 0; rv--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
