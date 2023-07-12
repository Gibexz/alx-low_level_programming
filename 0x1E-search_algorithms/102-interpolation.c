#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number or -1 id not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low, high;
	double po;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		po = (double)(high - low) / (array[high] - array[low]) *
									(value - array[low]);
		pos = (size_t)(low + po);
		printf("Value checked array[%lu]", pos);

		if (pos >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[pos]);
		}

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;

		if (low == high)
			break;
	}

	return (-1);
}
