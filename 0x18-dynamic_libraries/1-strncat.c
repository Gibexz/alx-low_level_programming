#include "main.h"
#include <string.h>

/**
 * _strncat - cancatenates two given strings
 * @dest: String to be appended to
 * @src: string to be appended
 * @n: most byte to be used from src
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		if (i < n)
		{
			*(dest + (len1 + i)) = *(src + i);
		}
		if (i == n)
		{
			break;
		}
	}
	return (dest);
}
