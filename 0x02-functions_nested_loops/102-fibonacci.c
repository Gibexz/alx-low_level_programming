#include <stdio.h>
#include "main.h"

/**
 * main - sums multiples of 3 and 5.
 *
 *Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2, k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}
	return (0);
}
