#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: interger count
 *
 * Return: Numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;

	va_list ap;

	va_start(ap, n);

	if (separator == NULL)
		return;
	while (i < n)
	{
		printf("%d", va_arg(ap, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}
