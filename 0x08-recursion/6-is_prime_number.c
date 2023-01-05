#include "main.h"

int check_prime(int, int);

/**
 * is_prime_number - prime identifier function
 * @n: number to check
 * Return: 1 or 0.
 *
 */
int is_prime_number(int n)
{
	int check_prime(int, int);
}

/**
 * check_prime -> checks if n is prime numbers
 * @n: number
 * @i: for iteration
 *
 * Return: 1 or 0.
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (i);
	}
	return (check_prime(n, i + 1));
}
