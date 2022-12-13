#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: Int value to be checked (ASCII value of char.)
 * Return: 1 if lowercase, 0 if not.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
