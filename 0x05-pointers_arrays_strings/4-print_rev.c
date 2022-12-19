#include "main.h"

/**
 * print_rev - function to print reverse of a string
 * @s: string in question
 *
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar('\n');
}
