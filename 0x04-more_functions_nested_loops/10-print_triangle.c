#include "main.h"

/**
 * print_triangle - Function to print a triangle
 *
 *
 * Return: Prints a triangle
 */
void print_triangle(int size)
{
	int row, col, space;
	row = 1;

	if (size >= row)
	{
		for (row = 1; row <= size; row++) /* Rows */
		{	
			space = row;
			while (space < size)
			{
				_putchar(' ');
				space++;
			}
			col = 1;
			while (col <= row)
			{
				_putchar('#');
				col++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
