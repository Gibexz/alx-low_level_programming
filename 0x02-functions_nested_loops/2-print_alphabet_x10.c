#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		char alpb;

		for (alpb = 'a'; alpb <= 'z'; alpb++)
		{
			_putchar(alpb);
		}
		_putchar('\n');
	}
}
