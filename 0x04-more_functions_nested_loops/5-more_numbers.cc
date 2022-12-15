#include "main.h"

/**
 * more_numbers - function to print most characters
 *
 * Return: returns the multi value
 */
void more_numbers(void)
{
	char s[21] = "01234567891011121314";
	int i = 0;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 20; i++)
		{
			_putchar(s[i]);
		}
	 _putchar('\n');
	}
}
