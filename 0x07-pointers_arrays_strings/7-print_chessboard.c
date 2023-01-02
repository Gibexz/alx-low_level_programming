#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Print the chessboard
 * @a: arrays
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			putchar(a[row][col]);
		}
		putchar('\n');
	}
}
