#include "main.h"

/**
 * _strcat - cancatenates two given strings
 * @dest: String to be appended to
 * @src: string to be appended
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;

	while (*(dest + len1) != '\0')
	{
		len1++;
	}

	while (*(src + len2))
	{
		*(dest + len1) = *(src + len2);
		if (*(src + count2) == '\0')
			break;
		len1++;
		len2++
	}
	return (dest);
}
