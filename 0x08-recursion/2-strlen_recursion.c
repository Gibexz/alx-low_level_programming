#include "main.h"

/**
 * _strlen_recursion - recursive function to find the lengt of a string
 * @s: pointer to string
 *
 * Return: Lenght of string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
