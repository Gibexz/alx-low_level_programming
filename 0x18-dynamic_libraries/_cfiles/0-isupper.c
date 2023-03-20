#include "main.h"

/**
 * _isupper - Checks if a character is uppercase
 * @c: character to be checked
 *
 * Return: 1 if upper, else 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
