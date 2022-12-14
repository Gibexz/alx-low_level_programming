#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: Prints the sum of even-valued fibobacci numbers up to a range.
 *
 *Return: 0
 */
int main(void)
{
	int i = 1, j = 2, total = 0; k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;
		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
