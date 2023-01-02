#include "main.h"

/**
 * *_strchr - function that locates a character in a string.
 * @s: string to search
 * @c: character been searched for.
 *
 * Return: pointer to character been searched for (a).
 */

char *_strchr(char *s, char c)
{
	int i;
	char *a;

	while (i > -1)
	{
		if (s[i] == c)
		{
			a = s[i];
			return (a);
		}
		if (s[i] == 0)
		{
			return (NULL);
		}
		i++;
	}
}
