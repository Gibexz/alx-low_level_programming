#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpb;

	for (alpb = 'a'; alpb <= 'z'; alpb++)
		{
			_putchar(alpb);
		}
	_putchar('\n');
	return(0)
}
