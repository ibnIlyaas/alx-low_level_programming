#include <stdio.h>
/**
 * main - print a to z - qe
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	putchar('\n');
	return (0);
}
