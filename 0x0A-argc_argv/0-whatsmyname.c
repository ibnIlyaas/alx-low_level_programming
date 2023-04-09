#include <stdio.h>
#include "main.h"

/**
 * main - prints name of program followed by new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always success
 */

int main(int argc, char *argv[])
{
	int len;

	len = sizeof(argv)/sizeof(argv[0]);
	_putchar(argv[len-1]);
	return (0);
}
