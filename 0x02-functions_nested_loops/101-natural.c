#include <stdio.h>
/**
 * main - prints the sum of mutliples of 5 and 3 below 1024
 * Return: Alway 0 (success)
 */
int main(void)
{
	int n;
	int sum;

	sum = 0;
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
