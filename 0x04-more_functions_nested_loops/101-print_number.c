#include "main.h"

/**
 * print_number - Function to print a integers
 * @n: Parameter/value to be considered.
 *
 * Return: Prints a number
 */
void print_number(int n)
{
	unsigned int a, b, counter;

	if (n < 0)
	{
		_putchar('-');
		a = n * -1;

	}
	else
	{
		a = n;
	}

	b = a;

	counter = 1;

	while (b > 9)
	{
		b = b / 10;
		counter = counter * 10;

	}
	for (; counter >= 1; counter /= 10)
	{
		_putchar(((a / counter) % 10) + '0');

	}
}
