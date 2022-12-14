#include <stdio.h>
#include "main.h"

/**
 * main - sums multiples of 3 and 5.
 *
 *Return: 0
 */
int main()
{
	int num;
	int sum;
	int check3;
	int check5;

	sum = 0;

	for (num = 1; num < 1024; num++)
	{
		check3 = num % 3;
		check5 = num % 5;

		if (check3 == 0 || check5 == 0)
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
