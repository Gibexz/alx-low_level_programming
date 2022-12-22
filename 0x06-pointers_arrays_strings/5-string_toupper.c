#include "main.h"

/**
 * string_toupper - function to change all lowercase
 * to uppercase in a string
 * @str - string in question
 *
 *
 * Return: str
 */
char *string_toupper(char *str)
{
	int i = 0; /* for use in looping */

	while (str[i] != '\0')
	{
		if ((str[i] <= 122) && (str[i] >= 97))
		{
			str[i] = str [i] - 32;
		}
		i++;
	}
	return (str);

