#include "main.h"

/**
 * more_numbers - function to print most characters
 *
 * Return: returns the multi value
 */
void more_numbers(void)
{
	int i, k;
	int j; /* for printing 10 times */

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			k = i;
			if (i > 9)
				k = i / 10;
			_putchar(k + '0');
			if (i > 9)
				_putchar(i % 10 + '0');
		}
	 _putchar('\n');
	}
}
