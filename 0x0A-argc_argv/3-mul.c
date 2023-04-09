#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - prints products of two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int product = 1;

	(void)argc;
	for (i = 1; i < argc; i++)
	{
		if(i < 2)
			printf("Error\n");
		return (0);

		product *= atoi(argv[i]);
	}
	printf("%d\n", product);
	return (0);
}
