#include "main.h"
#include <string.h>

/**
 * _memcpy - copies data from one mem loc to another
 * @dest: destination loc where bytes are copied to
 * @src: source loc where bytes are copied from
 * @n: number of bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
