#include "main.h"

/**
 * _strncpy - Function to copy a string
 * @dest: copy destination
 * @src: copy source
 * @n: number of characters/bytes to be copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;/* integer for loop */

	for (i = 0; *(src + i) != '\0'; i++)
	{
		if (i < n)
		{
			*(dest + i) = *(src + i);
		}
		if (i == n)
			break;
	}
	*(dest + i) = '\0';
	return (dest);
}
