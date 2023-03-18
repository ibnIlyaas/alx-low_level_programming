#include <stdio.h>
/**
 * main - Prints z..a
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char i = 'z';

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
