#include "main.h"
#include <string.h>

/**
 * _strspn - finds the length of a substring
 * @s: main string to be searched from
 * @accept: string to be compared to
 * Return: Lenght of substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int len; /*lenght of substring*/

	len = strspn(s, accept);
	return (len);
}
