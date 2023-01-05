#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to be worked on.
 *
 * Return: Sqrt of n.
 */
int _sqrt_recursion(int n)
{

	return (_sqrt(n, 1));
}

/**
 * _sqrt - fuction for squares iteration
 * @n: number to be worked on.
 * @i: iteration number
 *
 * Return: A number.
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
