#include "search_algos.h"
/**
 * binary_search -  function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: index of value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t midd, i;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		printf("Searching in array: ");
		/*for (size_t i = low; i <= high; i++)*/
		i = low;
		while (i <= high)
		{
			/*printf("%d%s", array[i], (i < high) ? "," : "\n");*/
			if (i < high)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
			i++;
		}
		printf("\n");
		midd = low + (high - low) / 2;

		if (array[midd] == value)
		{
			return (midd);
		}

		if (array[midd] < value)
			low = midd + 1;
		else
			high = midd - 1;
	}
	return (-1);
}
