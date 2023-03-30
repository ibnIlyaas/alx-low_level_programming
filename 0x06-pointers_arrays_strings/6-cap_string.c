#include "main.h"
#include <ctype.h>

/**
 * *cap_string(char *)
 * @string: string to be capitalized
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		if (s[i] >= 'a' && s[i] >= 'z' && isspace(s[i - 1]))
		{
			s[i] = string_toupper(str[i]);
		}
		i++;
	}
	return (str);
}
