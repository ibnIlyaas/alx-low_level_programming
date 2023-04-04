#include "main.h"

/**
 * print_chessboard - prints an imaginary chessboard
 * @a: array of x'ters
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	/* first we declare 2 variables of int type*/
	/* these variables represent indexes of  elements of of the 2D array*/
	int i1; /*Index 1*/
	int i2; /*index 2*/

	for(i1 = 0; i1 < 8; i1++)
	{
		for(i2 = 0; i2 < 8; i2++)
		{
			_putchar(a[i1][i2]);
		}
		_putchar(10);
	}
}
