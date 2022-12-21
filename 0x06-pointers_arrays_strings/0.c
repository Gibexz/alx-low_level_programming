#include "main.h"
#include <string.h>

/**
 * _strcat - cancatenates two given strings
 * @dest: String to be appended to
 * @src: string to be appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1, len2, i;

	len1 = strlen(dest);
	len2 = strlen(src);

	for (i = 0; i <= len2; i++)
	{
		*(dest + (len1 + i)) = *(src + i);
	}
	return (dest);
}
