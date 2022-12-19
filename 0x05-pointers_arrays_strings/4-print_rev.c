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
	int length;

	while (*(s + len) != '\0')
	{
		len++;
		length = len;
	}
	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
