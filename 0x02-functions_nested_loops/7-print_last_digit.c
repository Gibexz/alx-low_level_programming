#include "main.h"

/**
 * print_last_digit - Number to return it Absoulute value
 * @Num: Int value to be checked
 * Return: Last digit of a number
 */
int print_last_digit(int Num)
{
	int n = Num % 10;

	if (n < 0)
		n = -n;

	_putchar(n + '0');
	return (n);
}
