#include <stdio.h>
/**
 * main - prints 0-9 without char
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
