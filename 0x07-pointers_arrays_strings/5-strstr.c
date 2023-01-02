#include "main.h"

/**
 * *_strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 *
 * Return: pointer to the beginning of the located substring, or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	int a = 0;
	int b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}
	return ('\0');
}
