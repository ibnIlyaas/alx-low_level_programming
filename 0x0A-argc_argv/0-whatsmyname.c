#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * main - prints name of program followed by new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n",argv[argc - 1]);
	return (0);
}
