#include "main.h"

/**
 * print_most_numbers - function to print most characters
 *
 * Return: returns the multi value
 */
void print_most_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		_putchar(i + '0');
	}
	_putchar('\n');
}
