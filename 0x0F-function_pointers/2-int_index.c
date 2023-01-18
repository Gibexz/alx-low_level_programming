#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an intege
 * @size: array size
 * @array: pointer to array
 * @cmp: funtion pointer to comparing function
 *
 * Return: int.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
