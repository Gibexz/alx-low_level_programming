#include "main.h"

/**
 * _puts_recursion - Recursive function to print a string
 * @s: pointer to string
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (s == '\0')
	{
		_putchar('\0');
	}
	_putchar(s);
	_putchar(s + 1);
	_putchar('\n');
}
