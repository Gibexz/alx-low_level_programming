#include <stdio.h>

/**
 * main - code to print the largest prime factor
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	long int Num = 612852475143;
	int count, largest_p_f;

	for (count = 2; count <= Num; count++)
	{
		if (Num > 1)
		{
			while (Num % count == 0)
			{

				Num = Num / count;

				largest_p_f = count;

			}
		}
	}
	printf("%d", largest_p_f); /* Prints the last count which will be the largest prime factor */
	printf("\n");
	return (0);
}
