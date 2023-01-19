#include "3-calc.h"

/**
 * op_add - sums up 2 ints.
 * @a: first int
 * @b: second int
 *
 * Return: int (sum).
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of 2 ints.
 * @a: first int
 * @b: second int
 *
 * Return: int (difference)
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multipies 2 ints.
 * @a: first int
 * @b: second int
 *
 * Return: int (profuct of multiplication).
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide up 2 ints.
 * @a: first int
 * @b: second int
 *
 * Return: int (value from division).
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulus up 2 ints.
 * @a: first int
 * @b: second int
 *
 * Return: int (remainder).
 */
int op_mod(int a, int b)
{
	return (a % b);
}
