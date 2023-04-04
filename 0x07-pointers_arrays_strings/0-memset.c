#include "main.h"
#include <string.h>

/**
 * _memset - fills memory loc with a constant byte
 * @s: string from which byte are to be replaced
 * @b: byte to be replaced with
 * @n; number of bytes of s to be replaced
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
