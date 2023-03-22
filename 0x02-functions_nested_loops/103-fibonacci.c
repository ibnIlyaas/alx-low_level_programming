#include <stdio.h>
/**
 * main - prints sum of even fibo terms
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int evensum = 0;
	int a = 1;
	int b = 1;
	int sum = 1;

	while (b < 4000000)
	{
		sum = (a + b);
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			evensum += sum;
	}
	printf("%d\n", evensum);
	return (0);
}


