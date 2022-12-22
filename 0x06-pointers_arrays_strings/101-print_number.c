#include "main.h"

/**
 * print_number - function to print an integer
 * @n: interger to be printed
 *
 * Return: nothing
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	d = n;

	if (d / 10)
		print_number(d / 10);

	_putchar(d % 10 + '0');
}
