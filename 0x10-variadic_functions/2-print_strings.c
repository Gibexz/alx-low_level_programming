#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - variadic func to print string
 * @separator: const string to be printed btw strings
 * @n: number of strings
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list ap;
	char *string;

	va_start(ap, n);


	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (i < (n - 1))
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
	va_end(ap);
}
