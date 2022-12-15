#include "main.h"

/**
 * print_numbers - function to print 0 - 9 characters
 *
 * Return: returns the multi value
 */
void print_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
