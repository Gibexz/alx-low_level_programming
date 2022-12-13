#include "main.h"

/**
 * Main -Prints _putchar
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char s[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	return (0);
}
