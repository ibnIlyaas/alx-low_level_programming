#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches string s for matching bytes to accept
 * @s: string to be searched
 * @accept: string to be compared
 * Return: pointer to s
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	ptr = strpbrk(s, accept);
	return (ptr);
}
