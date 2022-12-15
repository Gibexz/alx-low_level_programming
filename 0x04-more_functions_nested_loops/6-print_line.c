#include "main.h"

/**
 * print_line - function to print a line
 * @n - line length control value
 * Return: returns a line based on value of n
 */
void print_line(int n)
{
	int i = 0;
	
	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
