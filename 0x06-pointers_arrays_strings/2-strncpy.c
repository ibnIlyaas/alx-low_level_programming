#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies n bytes to destination string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
