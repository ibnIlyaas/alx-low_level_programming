#include "main.h"

/**
 * _puts_recursion - prints string followed by new line
 * @s: string param
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') // check if end of string
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1); //iterates through string recursively
}
