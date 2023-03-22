#include <stdio.h>

/**
 * main - prints 1st 98 fib numbers
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int counter, overflow;
	unsigned long a = 1, b = 1, sum = 0;
	long head1, tail1, head2, tail2, headsum, tailsum;

	printf("1");
	for (counter = 2; counter < 93; counter++)
	{
		sum = (a + b);
		a = b;
		b = sum;
		printf(", %lu", sum);
	}
	head1 = (a / 1000000000);
	tail1 = (a % 1000000000);
	head2 = (b / 1000000000);
	tail2 = (b % 1000000000);

	for (; counter < 99; counter++)
	{
		overflow = (tail1 + tail2) / 1000000000;
		tailsum = (tail1 + tail2) - (1000000000 * overflow);
		headsum = (head1 + head2) + overflow;
		printf(", %lu%lu", headsum, tailsum);

		head1 = head2;
		tail1 = tail2;
		head2 = headsum;
		tail2 = tailsum;
	}
	printf("\n");
	return (0);
}
