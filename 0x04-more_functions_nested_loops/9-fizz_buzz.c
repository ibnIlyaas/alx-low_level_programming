#include <stdio.h>
/**
 * main - checks for multiples of 5 and 3 and prints FB
 *
 * Return: 0 Always success
 */
int main(void)
{
	int i;
	
	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
	}
	return (0);
}
