#include "main.h"
/**
 * rev_string - reverses a string
 * @s: char param
 */

void rev_string(char *s)
{
	int a = 0;
	int b = (_strlen(s) - 1);
	char c;

	while (a < b)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		a++, b--;
	}
}
