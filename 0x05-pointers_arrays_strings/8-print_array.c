#include <stdio.h>

/**
 * print_array - prints the n element of an array
 * @a: Array to be printed
 * @n: No. of variable in the array.
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == n - 1)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
		i++;
	}
	printf("\n");
}
