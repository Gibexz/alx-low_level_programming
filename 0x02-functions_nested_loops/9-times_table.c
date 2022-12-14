#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Return value is 0
 */
void times_table(void)
{
	int x = 0; /* factor */
	int y; /* count */
	int z; /* 9_times values computed */

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;

			if (z > 9)
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (y != 0)
			{
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(z + '0');
			}

			if (y != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
