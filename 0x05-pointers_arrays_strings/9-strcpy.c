#include "main.h"

/**
 * _strcpy - copies string to another memory location
 * @dest: destination of copied string
 * @src: where the string is
 *
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	char p;

	while (*(src + len) != '\0')
	{
		p = *(src + len);
		len++;
	}
	*(dest + len) = p;

	return (dest);
}
