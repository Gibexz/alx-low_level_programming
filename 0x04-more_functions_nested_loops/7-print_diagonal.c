#include "main.h"

/**
 * print_diagonal - function to print a line
 * @n- line length control value
 * @i - hihi
 * Return: returns a diagonal line based on value of n
 */
void print_diagonal(int n)
{
	int i = 1;

	if (n > 0)
	{
		_putchar('/');

		while (i < n)
		{
			int count = 0;

			_putchar('\n');
			while (count < i)
			{
				_putchar(' ');
				count++;
			}
			_putchar('/');
			i++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
