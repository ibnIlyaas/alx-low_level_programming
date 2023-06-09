#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, e, g, h, op1, op2;

a = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			a = 48;
			while (a < 58)
			{
				op1 = (h * 10) + g;
				op2 = (e * 10) + a;
				if (op1 < op2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(a);
					if (h == 57 && g == 56 && e == 57 && a == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				a++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}
