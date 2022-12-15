#include "main.h"

/**
 * _isdigit - Checks if a character is Number
 * @c: character to be checked
 *
 * Return: 1 if upper, else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
