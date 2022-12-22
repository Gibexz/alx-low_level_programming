#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: array in question
 * @n: no. of array elements
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, storage;

	for (i = 0; i < (n / 2); i++)
	{
		storage = a[i];
		a[i] = a[n - 1 -i];
		a[n - 1 - i] = storage;
	}
}
