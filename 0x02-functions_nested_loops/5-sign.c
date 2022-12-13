#include "main.h"

/**
 * print_sign - Checks if number is +, -, or 0
 * @c: Int value to be checked 
 * Return: 1 if +ve, 0 if 0, -1 if -ve
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1)
	}
}
