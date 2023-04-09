#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * isdig - checks if a char is a num
 * @str: string param
 * Return: 1 if true and 0 if false
 */

bool isdig(char *str)
{
	int ind;

	for (ind = 0; str[ind]; ind++)
	{
		if (!(isdigit(str[ind])))
			return (0);
	}
	return (1);
}


/**
 * main - prints sum of two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (argc > i)
	{
		if (isdig(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
return (0);
}
