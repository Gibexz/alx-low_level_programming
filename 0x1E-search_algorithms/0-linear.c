#include "search_algos.h"
/**
 * linear_search -  function that searches for a value in an
 * array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 *
 * Return: Index where the value is found, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	/**for (size_t i = 0; i < size; i++)**/
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, *(array + i));
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
