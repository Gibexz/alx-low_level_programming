#include "main.h"

/**
 * factorial - function that returns the factorial of a given number.
 * @n: Integer i.e. to calculate its factortial
 *
 * Return: Factorial of integer or error output
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}

}
