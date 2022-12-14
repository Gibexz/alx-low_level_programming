#include "main.h"

/**
 * print_to_98 - Print from a number n to 98
 * @n : reference number.
 * 
 * Return: Return value is int
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else /* if n < 98 */
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ")
			}
			n++;
		}
	}
	printf("\n");
}
