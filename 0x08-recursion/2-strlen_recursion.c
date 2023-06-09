#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string
 * @s: String param
 * Return: Lenght
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;
	int result;
	result = _strlen_recursion(s + 1) + 1;

	return result;
}
