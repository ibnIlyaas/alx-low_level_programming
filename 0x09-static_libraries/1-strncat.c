#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates n number of bytes of src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
