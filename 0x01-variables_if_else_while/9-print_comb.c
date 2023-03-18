#include <stdio.h>
/**
 * main - prints 1 to 9
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
