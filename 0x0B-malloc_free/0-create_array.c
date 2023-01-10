#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array
 * @c: the specific char
 *
 * Return: s or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));
	if (size == 0)
	{
		return (NULL);
	}
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
