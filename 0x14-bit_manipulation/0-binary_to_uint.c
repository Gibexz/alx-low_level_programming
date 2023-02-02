#include "main.h"
#include <string.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 1's and 0's
 *
 * Return: unsigned int or 0 on failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	unsigned int i, k, base = 1, l;

	k = strlen(b);
	l = (strlen(b) - 1);
	i = 0;

	if (b == NULL)
		return (0);

	for (i = 0; i < k; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	while (l)
	{
		if (b[l] == '1')
			sum = sum + base;

		base = base * 2;
		l--;
	}

	return (sum);
}
