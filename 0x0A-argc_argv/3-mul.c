#include <stdio.h>
#include "main.h"

/**
 * main - prints products of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int product = 1;

	(void)argc;
	if (i < 3)
		printf("Error\n");
	return (1);

	for (i = 1; i < argc; i++)
	{
		product *= atoi(argv[i]);
	}
	printf("%d\n", product;
	return (0);
}
