#include <main.h>

/**
 *  *_memset - function to fill memory with a constant byte.
 *  @s: point to string/char memory location
 *  to be replaced/changed with constant character
 *  @b: contant character
 *  @n: number of bytes to be filled/replaced
 *
 *  Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
