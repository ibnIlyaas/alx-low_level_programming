#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string
 * @s: String param
 * Return: Lenght
 */

int _strlen_recursion(char *s)
{
	int result;

	if (*s == '\0')
		return (0);
	result = _strlen_recursion(s + 1) + 1;

	return (result);
}
