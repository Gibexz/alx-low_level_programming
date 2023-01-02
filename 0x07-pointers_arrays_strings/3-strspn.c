#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: Main string
 * @accept: string to check match against s.
 *
 * Return: Number of matches (m) (in bytes)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j; /* To be used for loop iterations */
	int m = 0; /* Count for number of matches (i.e matching bytes) */

	while (s[i])
	{
		j = 0;

		while (accept[j] != 32)
		{
			if (s[i] == accept[j])
			{
				m++;
			}
			j++;
		}
		i++;
	}
	return (m);
}
