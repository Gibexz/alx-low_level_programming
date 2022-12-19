#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: passed string pointer
 *
 * Return void
 */
void puts2(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
			puts(*(str + len));
		len++;
	}
}
