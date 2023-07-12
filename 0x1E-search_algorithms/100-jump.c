#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a
 * sorted array of integers using the Jump search algorithm.
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index of value else -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t index, step, start, i;

	if (array == NULL)
		return (-1);

	step = (size_t)sqrt((double)size);
	index = 0;

	while ((array[index] < value) && (index < size))
	{
		printf("Value checked array [%lu] = [%lu]\n", index, index);
		start = index;
		index = index + step;

		if (index > size - 1)
			index = size;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", start, index);

	i = start;
	/*for (i = start; i <= index - 1; i++)*/
	while (i < index)
	{
		printf("Value checked array [%lu] = [%lu]\n", i, i);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
