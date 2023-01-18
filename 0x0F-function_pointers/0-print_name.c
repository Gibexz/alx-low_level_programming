#include "function_pointers.h"

/**
 * print_name - function that prints name
 * @name: char to be displayed
 * @f: a pointer function that returns void
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f) /* i.e. if Null or maybe int is passed */
		return;

	(f)(name);
}
