#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: main string
 * @accept: string (byte occurence) to be searched for.
 *
 * Return: pointer to the first matching byte occurence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[j]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
