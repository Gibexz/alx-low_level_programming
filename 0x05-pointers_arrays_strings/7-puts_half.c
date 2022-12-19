#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to string in question
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0;
	char Strg;

	while (*(str + len) != '\0')
		len++;
	if (len % 2 == 0)
		len = len / 2;
	else
		len = len / 2 + 1;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
	_putchar('\n');
}
