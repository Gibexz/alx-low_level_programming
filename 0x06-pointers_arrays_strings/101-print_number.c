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

	if (n == 0)
	       _putchar('0');

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
