#include "main.h"

/**
 * swap_int - function to swap the know values of two integers
 * @a: New interger value
 * @b: A second new integer value
 *
 * Return: Nothing i.e Void.
 */
void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*a = bb;
	*b = aa;
}
