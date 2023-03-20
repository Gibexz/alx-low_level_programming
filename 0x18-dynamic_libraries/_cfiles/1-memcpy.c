#include "main.h"

/**
 *  *_memcpy - function to copy a memory area.
 *  @dest: destination address of copied memory area.
 *  @src: memory area to be copied.
 *  @n: bytes of memory to be copied.
 *
 *  Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
