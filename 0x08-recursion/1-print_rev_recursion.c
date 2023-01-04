#include "main.h"

/**
 * _print_rev_recursion -> printing string in reverse using recursion
 *
 * @s: string s
 *
 */
void _print_rev_recursion(char *s)
{
	int len = 0;
	
	while (*s != '\0')
	{
		len++;
	}
	len--;
	
	if (len == 0)
	{
		_putchar(s[0]);
		_putchar('\n');
		return;
	}
	_putchar(s[len]);
	_print_rev_recursion(s[len - 1]);
}
