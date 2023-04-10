#include "main.h"
#include <string.h>

/**
 * _strstr - searches haystack for matching bytes to needle
 * @haystack: string to be searched
 * @needle: string to be compared
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	ptr = strstr(haystack, needle);
	return (ptr);
}
